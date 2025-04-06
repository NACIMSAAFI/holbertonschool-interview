# Regular Expression Matching

This project implements a simple regular expression matching function in C that supports the special characters `.` and `*`.

## Table of Contents
1. [Description](#description)
2. [Requirements](#requirements)
3. [Implementation](#implementation)


## Description

The goal is to write a function `regex_match()` that checks whether a given pattern matches a given string, supporting:
- `.` - matches any single character
- `*` - matches zero or more of the preceding character

## Requirements

- **Compilation**: Ubuntu 14.04 LTS with gcc 4.8.4
- **Flags**: `-Wall -Werror -Wextra -pedantic`
- **Style**: Betty style compliant
- **Restrictions**:
  - No global variables
  - Maximum 5 functions per file
  - No standard library functions (except those allowed)
- **Header**: `regex.h` with include guards

## Implementation

### Function Prototype
```c
int regex_match(char const *str, char const *pattern);