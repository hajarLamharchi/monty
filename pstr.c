#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 */
void pstr(void)
{
	if (top == NULL)
	{
		fprintf(stdout, "\n");
		return;
	}
	while (top != NULL)
	{
		if ((top->n >= 65 && top->n <= 90) || (top->n >= 97 && top->n <= 122))
			fprintf(stdout, "%c", (char)top->n);
		top = top->next;
	}
	fprintf(stdout, "\n");
}
