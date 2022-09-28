#!/usr/bin/python3

def uniq_add(my_list=[]):
    result = 0
    for a in set(my_list):
        result += a
        return result
