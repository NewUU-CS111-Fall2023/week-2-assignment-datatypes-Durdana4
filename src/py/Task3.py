from random import randint
class longArithmetics():
    def long_arithmetics(self, A):
        x = randint(10**99, 10**100-1)
        print(x,"\nx/A = ", x/A)

if __name__=="__main__":
    obj=longArithmetics()
    obj.long_arithmetics(float(input("A = ")))