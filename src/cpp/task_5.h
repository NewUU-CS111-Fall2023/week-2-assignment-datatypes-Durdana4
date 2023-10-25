#include <iostream>
#include <vector>
using namespace std;
class Coordinate {
private:
    int x;
    int y;

public:
    Coordinate(int xVal, int yVal) : x(xVal), y(yVal) {}

    int getX() const { return x; }
    int getY() const { return y; }
};

class Game {
private:
    vector<Coordinate> enemyCoordinates;

public:
    void addEnemy(const Coordinate& coordinate) {
        enemyCoordinates.push_back(coordinate);
    }

    bool characterSurvives(const Coordinate& characterCoordinate) const {
        for (const Coordinate& enemyCoordinate : enemyCoordinates) {
            if (enemyCoordinate.getX() == characterCoordinate.getX() &&
                enemyCoordinate.getY() == characterCoordinate.getY()) {
                return false;  
            }
        }
        return true; 
    }
};

int main() {
    int N;
    cout << "Enter the number of coordinates: ";
    cin >> N;

    Game game;

    for (int i = 0; i < N; i++) {
        int x, y;
        cout << "Enter the coordinates for drop-off " << i + 1 << ": ";
        cin >> x >> y;

        Coordinate coordinate(x, y);
        game.addEnemy(coordinate);

        cout << "Character ";
        if (game.characterSurvives(coordinate)) {
            cout << "survives!";
        } else {
            cout << "dies!";
        }
        cout << std::endl;
    }

    return 0;
}
