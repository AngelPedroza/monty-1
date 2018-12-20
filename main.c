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
	char *buffer = NULL, *sp = " ", **optoks, *rat;
	size_t buffer_size;
	FILE *stream;
	stack_t *head = NULL;
	int pushn;

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
		rat = optoks[0];
		if (strcmp(rat, "\n") == 0)
			continue;
		if (strcmp(rat, "push") == 0)
		{
			if ((sizeof(optoks) >= 2) && (isint(optoks[1]) == 0))
				pushn = atoi(optoks[1]);
			else
			{
				fprintf(stderr, "L%u: usage: push integer\n",
					lineno);
				exit(EXIT_FAILURE);
			}
			op_push(&head, lineno);
			head->n = pushn;
		}
		get_op_func(rat)(&head, lineno);
	}
	if (optoks != NULL)
		free(optoks);
	if (buffer != NULL)
		free(buffer);
	fclose(stream);
	return (0);
}
