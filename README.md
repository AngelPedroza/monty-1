# holbertonschool-low_level_programming
## 0x18-stacks_queues_lifo_fifo
### monty
The goal of this project was to create an interpreter for MontyByteCodes files.
### Compilation and Output
The files are to be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
### Implemented opcodes
`push`

Usage: `push <int>` where `<int>` is an integer

What it does: pushes an element to the stack.

`pall`

Usage: `pall`

What it does: prints all the values on the stack, starting from the top of the stack.

`pint`

Usage: `pint`

What it does: prints the value at the top of the stack followed by a new line.

`pop`

Usage: `pop`

What it does: removes the top element of the stack.

`swap`

Usage: `swap`

What it does: swaps the top two elements of the stack.

`add`

Usage: `add`

What it does: adds the top two elements of the stack.

`nop`

Usage: `nop`

What it does: nothing.
