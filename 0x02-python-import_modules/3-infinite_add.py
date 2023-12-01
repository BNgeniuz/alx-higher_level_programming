#!/usr/bin/python3
import sys

if __name__ == "__main__":

    total = 0
    for j in range(len(sys.argv) - 1):
        total += int(sys.argv[j + 1])
    print(total)
