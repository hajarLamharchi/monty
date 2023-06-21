#include "monty.h"
/**
 * read_opcode - reads the monty files and interprete the code
 * @file: input file
 */
void read_opcode(const char *file)
{
	FILE *fp = fopen(file, "r");
	char opcode[50];
	char *token;
	int line = 1;
	char *arg;

	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	while (fgets(opcode, sizeof(opcode), fp))
	{
		token = strtok(opcode, " \n");
		if (token == NULL)
		{
			line++;
			continue;
		}
		if (strcmp(token, "push") == 0)
		{
			arg = strtok(NULL, " \n");
			if (arg == NULL || !isdigit(*arg))
			{
				fprintf(stderr, "L%d: usage: push integer\n", line);
				exit(EXIT_FAILURE);
			}
			push(atoi(arg));
		}
		else if (strcmp(token, "pall") == 0)
			pall();
		else if (strcmp(token, "pint") == 0)
			pint();
		else if (strcmp(token, "pop") == 0)
			pop();
		else if (strcmp(token, "swap") == 0)
			swap();
		else if (strcmp(token, "add") == 0)
			add();
		else if (strcmp(token, "nop") == 0)
			nop();
		else if (strcmp(token, "sub") == 0)
			sub();
		else if (strcmp(token, "#") == 0)
			continue;
		else if (strcmp(token, "div") == 0)
			_div();
		else if (strcmp(token, "mul") == 0)
			mul();
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line, token);
			exit(EXIT_FAILURE);
		}
		line++;
	}
	fclose(fp);
}
