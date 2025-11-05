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

def factorial(n):
    if(n == 0 or n == 1):
        return 1
    else:
        return( n * factorial(n-1) )


print(factorial(3))
print(factorial(4))
print(factorial(5))

def fibonnaci(n):
    if(n <= 1 ):
        return 1
    else :
        return fibonnaci(n-1) + fibonnaci(n-2)

print(fibonnaci(0))
print(fibonnaci(1))
print(fibonnaci(2))
print(fibonnaci(3))
print(fibonnaci(4))
print(fibonnaci(5))
print(fibonnaci(6))
