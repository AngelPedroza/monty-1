#include "monty.h"

/**
 * get_op_func - selects correct function to implement opcode
 * @s: opcode to be implemented
 * Return: pointer to function
 */
void get_op_func(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
	{"pall", op_pall},
	{"pint", op_pint},
	{"pop", op_pop},
	{"swap", op_swap},
	{"add", op_add},
	{"nop", op_nop},
	{NULL, NULL}
	};
	int i;

	for (i = 0; i < 7; i++)
	{
		if (strcmp(name.rat, ops[i].opcode) == 0)
			ops[i].f(stack, line_number);
			return;
	}
	if (i > 6)
	{
		fprintf(stderr, "L%u: unknown operation %s\n",
			line_number, name.rat);
		exit(EXIT_FAILURE);
	}
}
