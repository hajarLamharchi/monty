#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 */
void pint(void)
{
	if (top == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", top->n);

}
