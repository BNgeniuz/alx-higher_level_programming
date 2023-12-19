#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    div_element = []
    for j in range(list_length):
        try:
            div = my_list_1[j] / my_list_2[j]
        except TypeError:
            print("wrong type")
            div = 0
        except ZeroDivisionError:
            print("division by 0")
            div = 0
        except IndexError:
            print("out of range")
            div = 0
        finally:
            div_element.append(div)
    return div_element
