#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *top;
extern FILE *file;

void push(int n);
void pall(void);
void pint(int line);
void pop(int line);
void swap(int line);
void add(int line);
void read_opcode(const char *file);
void nop(void);
void sub(int line);
void _div(int line);
void mul(int line);
void mod(int line);
void opcode_instruction(const char *opcode, int line);
void free_stack(void);
void pchar(void);
void pstr(void);
void rotl(void);
void rotr(void);

#endif
