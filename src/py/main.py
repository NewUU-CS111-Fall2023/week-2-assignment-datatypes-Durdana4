# * Author: Durdana YEmbergenova
# * Date: 20.10.2023
from Task1 import leapYear
print("Task 1 \n")
obj=leapYear()
obj.leap_year(int(input("Enter a year: \n")))

from Task2 import guessingNumber
print("Task 2 \n")
obj=guessingNumber()
obj.guessing_number(int(input("Guess a number: \n")))

from Task3 import longArithmetics
print("Task 3 \n")
obj=longArithmetics()
obj.long_arithmetics(float(input("A = ")))