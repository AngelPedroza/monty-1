# Stacks, Queues - LIFO, FIFO
### What is this?
A project for [Holberton School](https://www.holbertonschool.com/), this is an interpreter for Monty bytecodes files.
### Why?
This project reviewed the concepts of file input/output, linked lists, and stack.
### Requirements of project
- Ubuntu 14.04 LTS
- all `.c` files pass [`Betty`](https://github.com/holbertonschool/Betty) style: [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- maximum of one global variable
- no more than 5 functions per file
- prototypes of all functions are included in header file called `monty.h`
- all header files are include guarded
- allowed to use standard library
### Compilation
The files are to be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
### How to use
1. compile files
2. `$ ./monty monty_byte_code_file_name.m`

A few Monty bytecode files are supplied in the `byecodes` directory. For supported opcodes, look below.
### Implemented opcodes
- **push**

  Usage: `push <int>` where `<int>` is an integer

  What it does: pushes an element to the stack.

- **pall**

  Usage: `pall`

  What it does: prints all the values on the stack, starting from the top of the stack.

- **pint**

  Usage: `pint`

  What it does: prints the value at the top of the stack followed by a new line.

- **pop**

  Usage: `pop`

  What it does: removes the top element of the stack.

- **swap**

  Usage: `swap`

  What it does: swaps the top two elements of the stack.

- **add**

  Usage: `add`

  What it does: adds the top two elements of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

- **nop**

  Usage: `nop`

  What it does: nothing.

- **sub**

  Usage: `sub`

  What it does: subtracts the top element of the stack from the second element of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

- **div**

  Usage: `div`

  What it does: divides the second top element of the stack by the first element of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

- **mul**

  Usage: `mul`

  What it does: multiplies the top two elements of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

- **mod**

  Usage: `mod`

  What it does: computes the remainder of the division of the second top element of the stack by the top element of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

- **pchar**

  Usage: `pchar`

  What it does: prints the character at the top of the stack if it is a printable character.

- **pstr**

  Usage: `pstr`

  What it does: prints the string starting at the top of the stack.

- **rotl**

  Usage: `rotl`

  What it does: rotates the stack to the left.

- **rotr**

  Usage: `rotr`

  What it does: rotates the stack to the right.
### Challenges
- breaking down the project into smaller manageable pieces, and then breaking them into even smaller pieces so that I could have functions that each only did one thing
- trying to make main function have fewer lines
