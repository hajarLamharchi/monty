#include "monty.h"
/**
 * opcode_instruction - handle the opcode functions
 * @opcode: the opcode function
 * @line: line number
 */
void opcode_instruction(const char *opcode, int line)
{
	char *arg;

	if (strcmp(opcode, "push") == 0)
	{
		arg = strtok(NULL, " \n");
		if (arg == NULL || !isdigit(*arg))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line);
			exit(EXIT_FAILURE);
		}
		push(atoi(arg));
	}
	else if (strcmp(opcode, "pall") == 0)
		pall();
	else if (strcmp(opcode, "pint") == 0)
		pint();
	else if (strcmp(opcode, "pop") == 0)
		pop();
	else if (strcmp(opcode, "swap") == 0)
		swap();
	else if (strcmp(opcode, "add") == 0)
		add();
	else if (strcmp(opcode, "nop") == 0)
		nop();
	else if (strcmp(opcode, "sub") == 0)
		sub();
	else if (strcmp(opcode, "#") == 0)
		return;
	else if (strcmp(opcode, "div") == 0)
		_div();
	else if (strcmp(opcode, "mul") == 0)
		mul();
	else if (strcmp(opcode, "mod") == 0)
		mod();
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
		exit(EXIT_FAILURE);
	}
}
