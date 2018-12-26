#include "monty.h"

/**
 * op_sub - subtracts top element of stack from second element of stack
 * @stack: pointer to the stack
 * @line_number: line where opcode appears
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *node1 = *stack, *node2;

	if ((stack == NULL) || (node1 == NULL))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	node2 = node1->next;
	if (node2 == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	node2->n -= node1->n;
	*stack = node2;
	node2->prev = NULL;
	free(node1);
}
