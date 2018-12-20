#include "monty.h"

/**
 * op_pall - prints each stack element on a new line
 * @stack: a doubly linked list
 * @line_number: line where opcode appears
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	for (; current != NULL; current = current->next)
		printf("%i\n", current->n);
}

/**
 * op_pint - prints the value at the top of the stack
 * @stack: a doubly linked list
 * @line_number: line where opcode appears
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if ((*stack == NULL) || (stack == NULL))
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*stack)->n);
}

/**
 * op_nop - does nothing
 * @stack: a doubly linked list
 * @line_number: line where opcode appears
 */
void op_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
