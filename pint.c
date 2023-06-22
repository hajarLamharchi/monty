#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 */
void pint(FILE *f)
{
	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", __LINE__);
		fclose(f);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", top->n);

}
