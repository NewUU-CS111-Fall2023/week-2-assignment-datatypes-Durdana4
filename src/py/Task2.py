from random import randint
class guessingNumber():
    def guessing_number(self, x):
        a = randint(1,100)
        while x!=a:
            if x>a:
                print("Too high! \n")
                x = int(input("Guess again! \n"))
            else:
                print("Too low! \n")
                x = int(input("Guess again! \n"))
        print(x, " Congratulations! You found it! \n")
if __name__=="__main__":
    obj=guessingNumber()
    obj.guessing_number(int(input("Guess a number: \n")))

