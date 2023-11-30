#!/usr/bin/python3
if __name__ == "__main__":
    import sys

    read = len(sys.argv) - 1
    if read == 0:
        print("0 arguments.")
    elif read == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(read))
        for j in range(read):
            print("{}: {}".format(j + 1, sys.argv[j + 1]))
