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
a = input("Enter the number : ")
print(f"multiplication table of {a} is ")
try:
    for i in range(1,11):
        print(f"{a} x {i} = {int(a)*i}")
except Exception as e:
    print("some error ouccured please enter a valid integer")

print("end of program")
