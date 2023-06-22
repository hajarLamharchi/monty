#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @line: instruction line
 */
void pchar(int line)
{
	if (top == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		free_stack();
		fclose(file);
		exit(EXIT_FAILURE);
	}
	 if (top->n < 0 || top->n > 127)
        {
                fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
                free_stack();
		fclose(file);
                exit(EXIT_FAILURE);
        }
	fprintf(stdout, "%c\n", top->n);
}
