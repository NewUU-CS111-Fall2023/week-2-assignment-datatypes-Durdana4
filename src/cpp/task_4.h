#include <iostream>
#include <string>
using namespace std;
class SentenceMatcher {
private:
    string sentence;

public:
    explicit SentenceMatcher(const string& inputSentence) : sentence(inputSentence) {}

    int findSubstringIndex(const string& word) const {
        size_t found = sentence.find(word);
        if (found != string::npos) {
            return static_cast<int>(found);
        }
        return -1;
    }
};

int main() {
    string sentence, word;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter a word to search: ";
    cin >> word;

    SentenceMatcher matcher(sentence);
    int index = matcher.findSubstringIndex(word);
    if (index != -1) {
        cout << "Match found at index " << index << endl;
    } else {
        cout << "No match" << endl;
    }

    return 0;
}
