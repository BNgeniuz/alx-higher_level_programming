#!/usr/bin/python3
from calculator_1 import add, sub, div, mul
import sys
from sys import argv, exit

if __name__ == "__main__":

    if len(argv) != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)

        oprt = argv[2]
        a = int(argv[1])
        b = int(argv[3])

        if oprt == '+':
            print("{} + {}".format(a, b, add(a, b)))
        elif oprt == '-':
            print("{} - {}".format(a, b, sub(a, b)))
        elif oprt == '/':
            print("{} / {}".format(a, b, div(a, b)))
        elif oprt == '*':
            print("{} * { }".format(a, b, mul(a, b)))
        else:
            print("Unknown operator: Available operators: +, -, *, and /")
            exit(1)
