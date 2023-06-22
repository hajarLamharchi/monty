#include "monty.h"

int checkarg(char *arg);
/**
 * opcode_instruction - handle the opcode functions
 * @opcode: the opcode function
 * @line: line number
 */
void opcode_instruction(const char *opcode, int line)
{
	char *arg;
	int flag;

	if (strcmp(opcode, "push") == 0)
	{
		arg = strtok(NULL, " \n\t");
		flag = checkarg(arg);
		if (arg == NULL || flag == 1)
		{
			fclose(file);
			fprintf(stderr, "L%d: usage: push integer\n", line);
			free_stack();
			exit(EXIT_FAILURE);
		}
		push(atoi(arg));
	}
	else if (strcmp(opcode, "pall") == 0)
		pall();
	else if (strcmp(opcode, "pint") == 0)
		pint(line);
	else if (strcmp(opcode, "pop") == 0)
		pop(line);
	else if (strcmp(opcode, "swap") == 0)
		swap(line);
	else if (strcmp(opcode, "add") == 0)
		add(line);
	else if (strcmp(opcode, "nop") == 0)
		nop();
	else if (strcmp(opcode, "sub") == 0)
		sub(line);
	else if (strcmp(opcode, "#") == 0)
		nop();
	else if (strcmp(opcode, "div") == 0)
		_div(line);
	else if (strcmp(opcode, "mul") == 0)
		mul(line);
	else if (strcmp(opcode, "mod") == 0)
		mod(line);
	else if (strcmp(opcode, "pchar") == 0)
		pchar(line);
	else if (strcmp(opcode, "pstr") == 0)
		pstr();
	else if (strcmp(opcode, "rotl") == 0)
		rotl();
	else if (strcmp(opcode, "rotr") == 0)
		rotr();
	else
	{
		fclose(file);
		fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
		free_stack();
		exit(EXIT_FAILURE);
	}
}
/**
 * checkarg - checks if arg is an in or not
 * @arg: string to check
 *
 * Return: 0 if int els 1
 */
int checkarg(char *arg)
{
	int j = 0, flag = 0;

	if (arg[0] == '-')
		j++;
	for (; arg[j] != '\0'; j++)
	{
		if (arg[j] < 48 || arg[j] > 57)
		{
			flag = 1;
			break;
		}
	}
	return (flag);
}
