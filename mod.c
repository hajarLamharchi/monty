#include "monty.h"

/**
 * mod - computes the rest of the division of the second top by the top element
 */
void mod(void)
{
	int mod;
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	if (top->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	mod = top->next->n % top->n;
	top->next->n = mod;
	top = top->next;
	free(temp);
}
