#include"monty.h"

/**
 * sub - substracts the top element of the stack from the second top element
 * @line: instruction line
 */
void sub(int line)
{
	int sub;
	stack_t *temp = top;

	if (top == NULL || top->next == NULL)
	{
		fclose(file);
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		free_stack();
		exit(EXIT_FAILURE);
	}
	sub = top->next->n - top->n;
	top->next->n = sub;
	top = top->next;
	free(temp);
}
