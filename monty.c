#include "monty.h"
/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always EXIT_SUCCESS
 */
stack_t *top = NULL;

int main(int argc, char *argv[])
{
	stack_t *temp;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_opcode(argv[1]);

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
	return (0);
}
