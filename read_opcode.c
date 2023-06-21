#include "monty.h"
/**
 * read_opcode - reads the monty files and interprete the code
 * @file: input file
 */
void read_opcode(const char *file, FILE *f)
{
	FILE *fp = f;
	char opcode[50];
	char *token;
	int line = 1;

	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file%s\n", file);
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
		opcode_instruction(token, line, fp);
		line++;
	}
	/*fclose(fp);*/
}
