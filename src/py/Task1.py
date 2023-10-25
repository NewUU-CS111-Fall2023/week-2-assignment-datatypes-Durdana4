class leapYear():
    def leap_year(self,n):
        if n%100==0 and n%400!=0:
            print(n, " is not leap year")
        elif n%400==0:
            print(n, " is leap year")
        elif n%4==0:
            print(n, " is leap year")
        else:
            print(n, " is not leap year")

if __name__=="__main__":
    obj=leapYear()
    obj.leap_year(int(input("Enter a year: \n")))
