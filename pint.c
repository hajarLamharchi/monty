#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @f: file
 */
void pint(int line)
{
	if (top == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", top->n);

}
