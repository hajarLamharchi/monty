#include "monty.h"

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always EXIT_SUCCESS
 */
stack_t *top = NULL;
int main(__attribute__((unused)) int argc, char *argv[])
{
	read_opcode(argv[1]);
	return (0);
}
