#!/usr/bin/python3

"""
Log parsing algorithm that takes logs from stdin
and shows the file size and the number of appearances of each
type of error.
"""

import re
import sys


def main():
    """Main function"""
    error_dict = {
        "200": 0,
        "301": 0,
        "400": 0,
        "401": 0,
        "403": 0,
        "404": 0,
        "405": 0,
        "500": 0,
    }

    num_lines = 0
    file_size = 0

    file_size_regex = r"\d{1,4}$"
    error_regex = r"(?<=\s)\d{3}(?=\s\d{1,4}$)"
    log_entry_regex = re.compile(r"""
            .*\s-\s
            \[
            \d{4}-\d{1,2}-\d{1,2}
            \s
            \d{1,2}:\d{1,2}:\d{1,2}
            \.\d{6}
            \]\s
            "GET\s\/projects\/260\sHTTP\/1\.1"
            \s\d{3}\s
            \d{1,4}
        """, re.VERBOSE)
    data = sys.stdin.read()

    if data.strip() == "":
        print("File size: 0")
        return

    lines = data.splitlines()

    try:
        for line in lines:
            if re.match(log_entry_regex, line):
                num_lines += 1
                file_size += int(re.search(file_size_regex, line).group())
                error_code = re.search(error_regex, line).group()
                error_dict[error_code] += 1

                if num_lines == 10:
                    print_stats(file_size, error_dict)
                    num_lines = 0

        if num_lines > 0:
            print_stats(file_size, error_dict)

    except KeyboardInterrupt:
        print("\nExiting...")
        print_stats(file_size, error_dict)


def print_stats(file_size, error_dict):
    """Prints the accumulated statistics."""
    print(f"File size: {file_size}")
    for code, count in sorted(error_dict.items()):
        if count > 0:
            print(f"{code}: {count}")


if __name__ == "__main__":
    main()
