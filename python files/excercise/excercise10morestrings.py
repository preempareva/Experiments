#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      premp
#
# Created:     25-08-2023
# Copyright:   (c) premp 2023
# Licence:     <your licence>
#-------------------------------------------------------------------------------

#fstrings
letter = "hey my name is {} and i am from {}"
country = "India"
name = "Preem"

print(letter.format(name,country))
print(f"hey my name is {name} and i am from {country}")

#docstrings
def square(n):
    '''Takes a number n,returns its square'''
    print(n**2)
square(5)
print(square.__doc__)