#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 */
void swap(void)
{
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", __LINE__);
		free_stack();
		exit(EXIT_FAILURE);
	}
	top = top->next;
	temp->next = top->next;
	top->next = temp;
}
