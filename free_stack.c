#include "monty.h"

/**
 * free_stack - frees the stack
 */
void free_stack(void)
{
	stack_t *temp;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
}
