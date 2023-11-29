#!/usr/bin/python3
for l in range(9):
    for k in range(l + 1, 10):
        if l * 10 + k < 98:
            print("{:d}{:d}".format(l, k), end=",")
            print("{:d}".format(89))
