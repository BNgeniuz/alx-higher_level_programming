#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if not matrix:
        print()
    else:
        for c in range(len(matrix)):
            for x in range(len(matrix[c])):
                if x != len(matrix[c]) - 1:
                    matrix_of_int = ' '
                else:
                    matrix_of_int = ""
                print("{:d}".format(matrix[c][x]), end=matrix_of_int)
            print()
