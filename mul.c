#include "monty.h"

/**
 * mul - multiplies the second top element of the stack with the top element
 */
void mul(void)
{
	int mul;
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	mul = top->n * top->next->n;
	top->next->n = mul;
	top = top->next;
	free(temp);
}
