#include "monty.h"
/**
 * rotl - rotates the stack to the top
 */
void rotl(void)
{
	stack_t *temp = top;
	stack_t *temp2 = top->next;

	if (top == NULL)
		return;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = top;
	top->prev = temp;
	top->next = NULL;
	top = temp2;
	top->prev = NULL;
}
