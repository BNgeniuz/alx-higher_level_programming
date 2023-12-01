#!/usr/bin/python3
from sys import argv

total = sum(int(arg) for arg in argv[1:])

print(total)
