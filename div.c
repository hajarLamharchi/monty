#include "monty.h"
/**
 * _div - divides the second top element of the stack by the top element
 * @line: instruction line
 */
void _div(int line)
{
	int div;
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line);
		free_stack();
		fclose(file);
		exit(EXIT_FAILURE);
	}
	if (top->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line);
		fclose(file);
		free_stack();
		exit(EXIT_FAILURE);
	}
	div = top->next->n / top->n;
	top->next->n = div;
	top = top->next;
	free(temp);
}


