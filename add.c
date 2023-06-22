#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @line: instruction line
 */
void add(int line)
{
	int sum;
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",line);
		fclose(file);
		free_stack();
		exit(EXIT_FAILURE);
	}
	sum = top->n + top->next->n;
	top->next->n = sum;
	top = top->next;
	free(temp);
}
