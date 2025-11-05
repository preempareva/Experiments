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

import time
timestamp = time.strftime('%H:%M:%S')
print(timestamp)
timestamp = time.strftime('%H')
print(timestamp)
timestamp = time.strftime('%M')
print(timestamp)
timestamp = time.strftime('%S')
print(timestamp)

hour = int(time.strftime('%H'))
print(hour)

if hour > 6 and hour < 12:
    print("good morning")
elif hour > 12 and hour < 18:
    print("good evening")
elif hour > 18 and hour < 24:
    print("good night sleep early")
else:
    print("please sleep")