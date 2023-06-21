#include "monty.h"
static FILE *f;
/**
 * closef - closes file
 */
void closef(void)
{
	if (f != NULL)
		fclose(f);
}
stack_t *top = NULL;
/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{

	atexit(closef);
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	read_opcode(argv[1], f);

	free_stack();
	return (0);
}
