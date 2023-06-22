#include "monty.h"
void do_nothing(void);
stack_t *top = NULL;
/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_opcode(argv[1]);
	free_stack();
	return (0);
}
/**
 * do_nothing - does nothing
 */
void do_nothing(void)
{
}
