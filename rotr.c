#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 */
void rotr(void)
{
	int len = 1;
	stack_t *temp = top;

	if (top == NULL)
		return;

	while (temp->next != NULL)
	{
		len++;
		temp = temp->next;
	}
	while (len > 0)
	{
		rotl();
		len--;
	}
}
