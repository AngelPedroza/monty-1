#include "header.h"

/**
 * main - interprets Monty ByteCodes files
 * @ac: number of arguments
 * @av: pointers to the arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	unsigned int lineno = 1, ind;
	char *buffer = NULL, *newline = "\n", *sp = " "; **c_lines, **optoks;
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
	getline(&buffer, &buffer_size, stream);
	c_lines = split_string(stream, newline);
	for (ind = 0; c_lines[ind] != NULL; ind++)
	{
		optoks = split_string(c_lines[ind], sp);
		/* here match the opcode */
		lineno++;
	}
	/* loop to free everything in optoks bc malloc in split_string */
	/* loop to free everything in c_lines bc malloc in split_string */
	free(buffer)
	fclose(stream);
	return (0);
}
