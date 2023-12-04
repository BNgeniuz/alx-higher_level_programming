#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    for j in dir(hidden_4):
        if j[0] != '_' and j[1] != '_':
            print(j)
