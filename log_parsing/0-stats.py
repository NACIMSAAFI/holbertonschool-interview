#!/usr/bin/python3
"""
Module that parses a log and prints stats to stdout.
"""

from sys import stdin


status_codes = {
    "200": 0,
    "301": 0,
    "400": 0,
    "401": 0,
    "403": 0,
    "404": 0,
    "405": 0,
    "500": 0,
}

size = 0


def print_stats():
    """Prints the accumulated logs."""
    print("File size: {}".format(size))
    for status in sorted(status_codes.keys()):
        if status_codes[status] > 0:
            print("{}: {}".format(status, status_codes[status]))


if __name__ == "__main__":
    count = 0
    try:
        for line in stdin:
            items = line.split()
            if len(items) < 2:
                continue

            try:
                size += int(items[-1])
                status_code = items[-2]

                if status_code in status_codes:
                    status_codes[status_code] += 1
            except ValueError:

                continue

            if count == 9:
                print_stats()
                count = -1
            count += 1

    except KeyboardInterrupt:
        print_stats()
        raise

    print_stats()
