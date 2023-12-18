#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    element = 0
    for z in range(x):
        try:
            print(f"{my_list[z]}", end="")
            element += 1
        except IndexError:
            break
    print()
    return(element)
