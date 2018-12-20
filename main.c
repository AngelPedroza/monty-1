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
	char *buffer = NULL, *sp = " \n", **optoks, *rat;
	size_t buffer_size;
	FILE *stream;
	stack_t **head;

	pushn = 0;

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
		if (sizeof(optoks) >= 2)	
			pushn = atoi(optoks[1]);


	/*	if ((isdigit(pushn) == 0) || (optoks[1] == NULL))
		{
			fprintf(stderr, "L%u: usage: push integer
				\n", lineno);
			exit(EXIT_FAILURE);
		}	*/
		if (get_op_func(rat)(head, lineno) == NULL)
		{
			fprintf(stderr, "L%u: unknown operation %s\n",
				lineno, rat);
			exit(EXIT_FAILURE);
		}	
	}
	if (optoks)
		free(optoks);
	if (buffer)
		free(buffer);
	fclose(stream);
	return (0);
}
