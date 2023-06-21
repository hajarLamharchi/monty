#include "monty.h"
/**
 * _div - divides the second top element of the stack by the top element
 */
void _div(void)
{
	int div;
	stack_t *temp = top;

	if (top->next == NULL)
	{
		printf("L%d: can't div, stack too short\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	if (top->n == 0)
	{
		printf("L%d: division by zero\n", __LINE__);
		exit(EXIT_FAILURE);
	}
	div = top->next->n / top->n;
	top->next->n = div;
	top = top->next;
	free(temp);
}


