#include "monty.h"

/**
 * get_op_func - selects correct function to implement opcode
 * @s: opcode to be implemented
 * Return: pointer to function
 */
void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
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
		if (strcmp(s, ops[i].opcode) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
