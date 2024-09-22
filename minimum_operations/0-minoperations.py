#!/usr/bin/python3
"""Minimum Operations"""


def minOperations(n):
    """Method to calculate the minimum operations to achieve n 'H's."""
    if n <= 1:
        return 0

    operations = 0
    current = 1

    for i in range(2, n + 1):
        while n % i == 0:
            operations += i
            n //= i

    return operations
