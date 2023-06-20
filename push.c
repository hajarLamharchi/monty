#include "monty.h"

/**
 * push - inserts an element to the stack
 * @n: the value to insert
 * Return: Nothing
 */
void push(int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (top == NULL)
	{
		new_node->prev = NULL;
	}
	else 
		new_node->prev = top;
	top = new_node;
	/*
	new_node->prev = NULL;
	new_node->next = top;
	if (top != NULL)
		top->prev = new_node;
	top = new_node;
	*/
}
