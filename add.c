#include "monty.h"

/**
 * add - adds the top two elements of the stack
 */
void add(void)
{
	int sum;
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d : can't add, stack too short\n", __LINE__);
		free_stack();
		exit(EXIT_FAILURE);
	}
	sum = top->n + top->next->n;
	top->next->n = sum;
	top = top->next;
	free(temp);
}
