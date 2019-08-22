#include "monty.h"

/**
 * free_memory - frees memory allocated for linked list
 * @stack: pointer to beginning of linked list
 */
void free_memory(stack_t *stack)
{
	stack_t *current, *temp;

	current = stack;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	free_varoptoks();
}

/**
 * free_varoptoks - frees memory allocated for opcode tokens
 */
void free_varoptoks(void)
{
	unsigned int i;

	if (var.optoks == NULL)
		return;
	for (i = 0; var.optoks[i] != NULL; i++)
		free(var.optoks[i]);
	free(var.optoks);
}
