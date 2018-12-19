#include "monty.h"

/**
 * get_op_func - selects correct function to implement opcode
 * @s: opcode to be implemented
 * Return: pointer to function
 */
void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
	{"push", op_push},
	{"pall", op_pall},
	{"pint", op_pint},
	{"pop", op_pop},
	{"swap", op_swap},
	{"add", op_add},
	{"nop", op_nop},
	{NULL, NULL}
	};
	int i = 0;

	while ((i < 8) && (*s != *(ops[i].opcode)))
		i++
	return (ops[i].f);
}
