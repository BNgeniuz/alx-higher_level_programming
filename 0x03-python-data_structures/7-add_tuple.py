#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    len_a = len(tuple_a)
    len_b = len(tuple_b)

    if len_a == 0:
        nt1 = 0
        nt2 = 0
    elif len_a == 1:
        nt1 = tuple_a[0]
        nt2 = 0
    else:
        nt1 = tuple_a[0]
        nt2 = tuple_a[1]

    if len_b == 0:
        lt1 = 0
        lt2 = 0
    elif len_b == 1:
        lt1 = tuple_b[0]
        lt2 = 0
    else:
        lt1 = tuple_b[0]
        lt2 = tuple_b[1]

    new_tuple = (nt1 + lt1, nt2 + lt2)

    return (new_tuple)
