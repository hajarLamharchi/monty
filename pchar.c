#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 */
void pchar(void)
{
	if (top->n < 0 || top->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", __LINE__);
		free_stack();
		exit(EXIT_FAILURE);
	}
	if (top == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", __LINE__);
		free_stack();
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%c\n", top->n);
}
