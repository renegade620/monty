#include <stdio.h>
#include "main.h"

op_t op = {NULL, NULL, NULL, NULL};

/**
 * main - runs Monty
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Success - EXIT_SUCCESS, Failure - EXIT_FAILURE
 */
int main(int argc, char *argc[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	op.input = fopen(argv[1], "r");
	if (op.input == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	monty();

	free_opcode();
	return (EXIT_SUCCESS);
}
