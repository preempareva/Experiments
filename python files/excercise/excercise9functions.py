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

def calculatemean(a,b):
    mean = (a*b)/(a+b)
    mean = str(mean)
    print("mean is " + mean)

def greaternumber(a,b):
    if(a>b):
        print("first number is greater")
    else:
        print("second number is greater")
def lessernumber(a,b):
    if(a<b):
        print("first number is lesser")
    else:
        print("second number is lesser")

a = 4
b = 6
calculatemean(a,b)
greaternumber(a,b)
lessernumber(a,b)

c = 6
d = 2
calculatemean(c,d)
greaternumber(c,d)
lessernumber(c,d)