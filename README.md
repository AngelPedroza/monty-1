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
**push**

Usage: `push <int>` where `<int>` is an integer

What it does: pushes an element to the stack.

**pall**

Usage: `pall`

What it does: prints all the values on the stack, starting from the top of the stack.

**pint**

Usage: `pint`

What it does: prints the value at the top of the stack followed by a new line.

**pop**

Usage: `pop`

What it does: removes the top element of the stack.

**swap**

Usage: `swap`

What it does: swaps the top two elements of the stack.

**add**

Usage: `add`

What it does: adds the top two elements of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

**nop**

Usage: `nop`

What it does: nothing.

**sub**

Usage: `sub`

What it does: subtracts the top element of the stack from the second element of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

**div**

Usage: `div`

What it does: divides the second top element of the stack by the first element of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

**mul**

Usage: `mul`

What it does: multiplies the top two elements of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

**mod**

Usage: `mod`

What it does: computes the remainder of the division of the second top element of the stack by the top element of the stack. The answer is stored in the second top element of the stack and the top element is removed so that the top element contains the result and the stack is one element shorter.

**pchar**

Usage: `pchar`

What it does: prints the character at the top of the stack if it is a printable character.

