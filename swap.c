#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @line: instruction line
 */
void swap(int line)
{
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		free_stack();
		fclose(file);
		exit(EXIT_FAILURE);
	}
	top = top->next;
	temp->next = top->next;
	top->next = temp;
}
