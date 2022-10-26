#!/usr/bin/python3
"""Defines a Python class-toJSON function of a simple data structure."""


def class_to_json(obj):
    """Return the dictionary representation of a simple data structure."""
    return obj.__dict__
