#!/usr/bin/python3
for num in range(0, 10):
    for k in range(num + 1, 10):
        if num == 8 and k == 9:
            print("{}{}".format(num, k))
        else:
            print("{}{}, ".format(num, k), end='')
