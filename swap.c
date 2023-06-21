#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 */
void swap(void)
{
	int temp;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", __LINE__);
		free_stack();
		exit(EXIT_FAILURE);
	}
	temp = top->n;
	top->n = top->next->n;
	top->next->n = temp;
}
