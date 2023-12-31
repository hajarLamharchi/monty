#include "monty.h"

/**
 * mod - computes the rest of the division of the second top by the top element
 * @line: instruction line
 */
void mod(int line)
{
	int mod;
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fclose(file);
		fprintf(stderr, "L%d: can't mod, stack too short\n", line);
		free_stack();
		exit(EXIT_FAILURE);
	}
	if (top->n == 0)
	{
		fclose(file);
		fprintf(stderr, "L%d: division by zero\n", line);
		free_stack();
		exit(EXIT_FAILURE);
	}
	mod = top->next->n % top->n;
	top->next->n = mod;
	top = top->next;
	free(temp);
}
