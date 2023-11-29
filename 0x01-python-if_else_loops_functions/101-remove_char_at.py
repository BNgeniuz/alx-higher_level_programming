#!/usr/bin/python3
def remove_char_at(str, n):
    current = ''
    j = 0
    for char in str:
        if j != n:
            current += str[j]
        j += 1
    return (current)
