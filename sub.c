#include"monty.h"

/**
 * sub - substracts the top element of the stack from the second top element
 */
void sub(void)
{
	int sub;
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	sub = top->next->n - top->n;
	top->next->n = sub;
	top = top->next;
	free(temp);
}
