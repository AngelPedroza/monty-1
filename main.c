#include "monty.h"

/**
 * main - interprets Monty ByteCodes files
 * @ac: number of arguments
 * @av: pointers to the arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	unsigned int lineno = 1, pushn;
	char *buffer = NULL, *sp = " "; **optoks, *rat;
	size_t buffer_size;
	FILE *stream;

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
		optoks = split_string(stream, sp);
		rat = optoks[0];
		if (strcmp(rat, "push") == 0)
		{
			if (optoks[1] != NULL)
				pushn = atoi(optoks[1]);
			if ((isdigit(pushn) == 0) || (optoks[1] == NULL))
			{
				fprintf(stderr, "L%u: usage: push integer
					\n", lineno);
				exit(EXIT_FAILURE);
			}
			else
				/* push onto stack w helper function */
		}
		/* here match the opcode that is not push */
		if (get_op_func(rat) == NULL)
		{
			fprintf(stderr, "L%u: unknown operation %s\n",
				lineno, rat);
			exit(EXIT_FAILURE);
		}
		lineno++;
	}
	/* loop to free everything in optoks bc malloc in split_string */
	/* loop to free everything in c_lines bc malloc in split_string */
	free(buffer)
	fclose(stream);
	return (0);
}
