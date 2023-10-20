class leapYear():
    def leap_year(self,N):
        if N%4 != 0 :
            print(N, " is not a leap year \n")
        else:
            print(N, " is a leap year \n")

if __name__=="__main__":
    obj=leapYear()
    obj.leap_year(int(input("Enter a year: \n")))