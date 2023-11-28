#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_num = abs(number) % 10
if number < 0:
    last_num = -(last_num)
string = "Last digit of {} is {}".format(number, last_num)
    if last_num > 5:
        print(f"{string} and is greater than 5")
    elif last_num == 0:
        print(f"{string} and is 0")
    elif last_num < 6:
        print(f"{string} and is less than 6 and not 0")
