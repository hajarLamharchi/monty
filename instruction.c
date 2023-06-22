#include "monty.h"

int checkarg(char *arg);
/**
 * opcode_instruction - handle the opcode functions
 * @opcode: the opcode function
 * @line: line number
 * @fp: files
 */
void opcode_instruction(const char *opcode, int line, FILE *fp)
{
	char *arg;
	int flag;

	if (strcmp(opcode, "push") == 0)
	{
		arg = strtok(NULL, " \n\t");
		flag = checkarg(arg);
		if (arg == NULL || flag == 1)
		{
			fclose(fp);
			fprintf(stderr, "L%d: usage: push integer\n", line);
			free_stack();
			exit(EXIT_FAILURE);
		}
		push(atoi(arg));
	}
	else if (strcmp(opcode, "pall") == 0)
		pall();
	else if (strcmp(opcode, "pint") == 0)
		pint(fp);
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
		nop();
	else if (strcmp(opcode, "div") == 0)
		_div();
	else if (strcmp(opcode, "mul") == 0)
		mul();
	else if (strcmp(opcode, "mod") == 0)
		mod();
	else if (strcmp(opcode, "pchar") == 0)
		pchar();
	else if (strcmp(opcode, "pstr") == 0)
		pstr();
	else if (strcmp(opcode, "rotl") == 0)
		rotl();
	else if (strcmp(opcode, "rotr") == 0)
		rotr();
	else
	{
		fclose(fp);
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
