#!/usr/bin/python3
for l in range(0, 10):
    for k in range(l + 1, 10):
        if l == 8 and k == 9:
            print("{}{}".format(l, k))
        else:
            print("{}{}, ".format(l, k), end='')
