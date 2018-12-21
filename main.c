#include "monty.h"

/**
 * main - interprets Monty ByteCodes files
 * @ac: number of arguments
 * @av: pointers to the arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	unsigned int lineno = 0;
	char *buffer = NULL, *sp = " \n", **optoks;
	size_t buffer_size;
	FILE *stream;
	stack_t *head = NULL;

	if (ac != 2)
	{
		write(STDERR_FILENO, "USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}
	stream = fopen(av[1], "r");
	if (stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &buffer_size, stream) != -1)
	{
		lineno++;
		optoks = split_string(buffer, sp);
		name.rat = optoks[0];
		if (strcmp(name.rat, "") == 0)
			continue;
		else if (strcmp(name.rat, "push") == 0)
		{
			if ((optoks[1] != NULL) && (isint(optoks[1]) == 0))
				pushn = atoi(optoks[1]);
			else if (optoks[1] == NULL || isint(optoks[1]) != 0)
			{
				fprintf(stderr, "L%u: usage: push integer\n",
					lineno);
				exit(EXIT_FAILURE);
			}
			op_push(&head, lineno);
			head->n = pushn;
		}
		else
			get_op_func(&head, lineno);
	}
	if (optoks != NULL)
		free(optoks);
	if (buffer != NULL)
		free(buffer);
	fclose(stream);
	return (0);
}
