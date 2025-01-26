# Infinite Multiplication

## Description

This project involves writing a program that multiplies two positive numbers provided as command-line arguments. The program adheres to strict constraints on allowed functions and ensures correct error handling.

## Requirements

- **Allowed editors**: vi, vim, emacs
- **Compiler**: gcc 4.8.4
- **Operating system**: Ubuntu 14.04 LTS
- **C standard library functions allowed**: `malloc`, `free`, `exit`
- **Not allowed functions**: `printf`, `puts`, `calloc`, `realloc`, etc.
- **No global variables**
- **Maximum 5 functions per file**
- **Use of the `-Wall -Werror -Wextra -pedantic` flags in compilation**
- **Your program should only accept numeric arguments and print an error if they are invalid.**

## Task

### 0. Infinite Multiplication
Write a program that multiplies two positive numbers.

#### Usage:
```bash
$ ./mul num1 num2
```
num1 and num2 will be passed in base 10.
The program should print the result, followed by a new line.
If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98.
num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98.

#### Example:
```bash

$ ./mul 10 98
980

$ ./mul 235234693269436436223446526546334576437634765378653875874687649698659586695898579 28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708 6741363923575589187997046452422615907476091498993541335055687577080701989306920124712185512283638941702255216631601001307425878158314387046118270789357784940867204055508948216034308548261234814532268988302522598879945232929028116992753216059081057377926651337612618248332113256902485974371969385156015068813868274000683912187818601667058605418678284322237297213673482412392922068159291496274311170208689056585352782844484721140846367741649962638649229509281867896067208474178402156294978940712959518351846413859141792380853313812015295333546716634344284086426775480775747808150030732119704867805688704303461042373101473485092019906795014369069932
```
## Installation
To run the program, clone the repository and compile the C files:

```bash

$ git clone https://github.com/NACIMSAAFI/holbertonschool-interview.git
$ cd holbertonschool-interview/infinite_multiplication
$ gcc -Wall -Werror -Wextra -pedantic 0-mul.c _putchar.c -o mul
$ ./mul num1 num2
```

## File Structure

infinite_multiplication/
├── 0-mul.c
├── _putchar.c
├── holberton.h
└── README.md
