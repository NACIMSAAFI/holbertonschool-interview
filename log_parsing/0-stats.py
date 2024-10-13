#!/usr/bin/python3

"""
Log parsing algorithm that takes logs from stdin
and shows the file size and the number of appearances of each
type of error.
"""
import sys


def print_stats(file_size, status_codes):
    """Prints the accumulated stats."""
    print(f"File size: {file_size}")
    for status in sorted(status_codes.keys()):
        if status_codes[status] > 0:
            print(f"{status}: {status_codes[status]}")


def main():
    file_size = 0
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
    line_count = 0

    try:
        for line in sys.stdin:
            line_count += 1
            parts = line.split()

            if len(parts) != 7:
                continue  # Skip invalid lines

            ip_address = parts[0]
            date = parts[2][1:-1]  # Remove brackets
            request = parts[3]  # This will be "GET"
            url = parts[4]  # The requested URL
            protocol = parts[5]  # This will be "HTTP/1.1"
            status_code = parts[6]
            size = int(parts[7])

            if status_code in status_codes:
                status_codes[status_code] += 1
                file_size += size

            if line_count % 10 == 0:
                print_stats(file_size, status_codes)

    except KeyboardInterrupt:
        print_stats(file_size, status_codes)
        raise

    print_stats(file_size, status_codes)


if __name__ == "__main__":
    main()
