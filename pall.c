#include "monty.h"

/**
 * pall - prints all the elements of the stack
 */
void pall(void)
{
	stack_t *temp = top;

	while (temp != NULL)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->next;
	}
}
