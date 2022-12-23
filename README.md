# Monty

Monty is a simple stack-based programming language that is interpreted by a virtual machine. It is inspired by the Forth programming language, but is designed to be simpler and easier to learn.

This is a colaboration project fo sfotware development students at [Holberton School](https://www.holbertonschool.com/) from Cohort 19, This project is about monty

<p align="center">
<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcTLtL_ToHLEo_BWFxD-yf32Ux3zfsH_NPc8Qw&usqp=CAU" width="450" height="350">

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

To build and run the Monty interpreter, you will need a C compiler and the `make` utility. On most Unix-like systems, these can be installed using your system's package manager. For example, on Debian-based systems (such as Ubuntu), you can use the following command:

### Installing

To build the Monty interpreter, clone the repository and run `make`:

This will build the `monty` executable.

### Running

To run a Monty program, use the following syntax:

Where `<program>` is the path to a Monty program file.

## Syntax

Monty programs are composed of a series of opcodes, each on its own line. Opcodes are case-insensitive.

### Opcodes

The following opcodes are supported by the Monty interpreter:

- `push <value>`: Push a value onto the stack. `<value>` can be an integer or a string (surrounded by double quotes).
- `pall`: Print all values on the stack.
- `pop`: Pop the top value off the stack.
- `swap`: Swap the top two values on the stack.
- `add`: adds the top two elements of the stack.
- `pop`: Pop the top value off the stack.
- `nop`: doesn’t do anything.
- `sub`: subtracts the top element of the stack from the second top element of the stack.
- `div`: divides the second top element of the stack by the top element of the stack.
- `mul`: multiplies the second top element of the stack with the top element of the stack.
- `mod`: prints the char at the top of the stack, followed by a new line.
- `pchar`: prints the string starting at the top of the stack, followed by a new line.
- `pstl`: The top element of the stack becomes the last one, and the second top element of the stack becomes the first one.
- `pstr`: The last element of the stack becomes the top element of the stack.

# Author

By Melek Moalla:<br>
https://github.com/melekmoalla
