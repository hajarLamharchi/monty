#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 */
void pint(void)
{
	if (top == NULL)
	{
		printf("L%d: can't pint, stack empty\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", top->n);
}
