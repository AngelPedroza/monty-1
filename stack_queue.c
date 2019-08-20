#include "monty.h"

/**
 * op_stack - sets the data structure as a stack
 * @stack: pointer to top of stack/beginning of queue
 * @line_number: line the opcode appears
 */
void op_stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	var.s_q = 0;
}

/**
 * op_queue - sets the data structure as a queue
 * @stack: pointer to top of stack/beginning of queue
 * @line_number: line the opcode appears
 */
void op_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	var.s_q = 1;
}
