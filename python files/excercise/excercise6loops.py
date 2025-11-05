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

#while loops
i = 1
while i<=5:
    print(i)
    i=i+1

#pattern using while
i = 1
while i<=5:
    print(i * "*")
    i=i+1
i = 5
while i>=0:
    print(i * "*")
    i=i-1

#for loop
for item in range(5):
    print(item)
    item+1

#list kinda arrays
marks=[34,45,56]
print(marks)
print(marks[0])
print(marks[0:2])
marks.insert(0,23)
print(marks)

numbers = (23,34,45,45,45,67,67)
print(numbers.count(45))
print(numbers.index(67))