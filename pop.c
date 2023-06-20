#include "monty.h"

/**
 * pop - removes the top element of the stack
 */
void pop(void)
{
	stack_t *temp = top;

	if (top == NULL)
	{
		printf("L%d: can't pop an empty stack\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	top = top->next;
	free(temp);
}
