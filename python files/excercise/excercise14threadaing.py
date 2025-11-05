#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      premp
#
# Created:     26-08-2023
# Copyright:   (c) premp 2023
# Licence:     <your licence>
#-------------------------------------------------------------------------------

import time
import threading

def func(seconds):
    print(f"sleeping for {seconds} seconds ")
    time.sleep(seconds)

#normal code
#func(4)
#func(3)
#func(2)
#func(1)

#same code with threading
t1= threading.Thread(target=func, args=[4])
t2= threading.Thread(target=func, args=[3])
t3= threading.Thread(target=func, args=[2])
t4= threading.Thread(target=func, args=[1])


t1.start()
t2.start()
t3.start()
t4.start()