#include "monty.h"

/**
 * read_opcode - reads the monty files and interprete the code
 * @filee: input file
 */
void read_opcode(const char *filee)
{
	FILE *fp = fopen(filee, "r");
	char opcode[150];
	char *token;
	int line = 1;

	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filee);
		exit(EXIT_FAILURE);
	}
	file = fp;

	while (fgets(opcode, sizeof(opcode), fp))
	{
		token = strtok(opcode, " \n");
		if (token == NULL)
		{
			line++;
			continue;
		}
		opcode_instruction(token, line);
		line++;
	}
	fclose(fp);
}
