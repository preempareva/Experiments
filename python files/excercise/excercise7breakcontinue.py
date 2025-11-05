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

#break and continue
students = ["ram","shyam","kishan","radha","radhika"]
print(students)

for student in students:
    if student == "kishan":
        continue;
    print(student)

for student in students:
    if student == "radha":
        break;
    print(student)