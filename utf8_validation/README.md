# UTF-8 Validation

## Description

This project is part of the Holberton School curriculum and focuses on validating UTF-8 encoding. The goal is to implement a Python program that can verify if a given data set is a valid UTF-8 encoding sequence. UTF-8 is a variable-width character encoding used for electronic communication, supporting every character in the Unicode character set.

## Learning Objectives

- Understand the UTF-8 encoding format.
- Practice algorithmic problem-solving.
- Improve your Python programming skills, following the PEP 8 style guidelines.

## Resources

To complete this project, it is recommended to read or watch the following:

- [UTF-8](https://en.wikipedia.org/wiki/UTF-8)
- [Characters, Symbols, and the Unicode Miracle](https://www.youtube.com/watch?v=MijmeoH9LT4)

## Project Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be interpreted/compiled on Ubuntu 14.04 LTS using Python 3 (version 3.4.3).
- The first line of all files should be exactly `#!/usr/bin/python3`.
- All code should adhere to PEP 8 style guidelines (version 1.7.x).
- All files must be executable.
- The project folder must contain a `README.md` file.

## Task: UTF-8 Validation

### Task Details

You need to create a Python script that checks if a given data set represents a valid UTF-8 encoding. The function should be named `validUTF8(data)` and should return `True` if the data is valid UTF-8, otherwise return `False`.

### Usage

The script should be named `0-validate_utf8.py` and be executable. It should accept a list of integers as input, where each integer represents a byte of data.

### Example

```python
#!/usr/bin/python3
validUTF8 = __import__('0-validate_utf8').validUTF8

data = [197, 130, 1]
print(validUTF8(data))  # Output: True

data = [235, 140, 4]
print(validUTF8(data))  # Output: False
