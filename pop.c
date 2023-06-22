#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @line: instruction line
 */
void pop(int line)
{
	stack_t *temp = top;

	if (top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	top = top->next;
	free(temp);
}
