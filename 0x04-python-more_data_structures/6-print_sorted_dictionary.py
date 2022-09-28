#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):
    [print("{}: {}".format(k, dictionary[k])) for k in sorted(a_dictionary)]
