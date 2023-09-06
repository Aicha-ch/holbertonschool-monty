#include "monty.h"
/**
 * _push - push an element onto the stack
 * @stack: pointer to the stack
 * @value: value to push onto the stack
 * Return: void
 */
void _push(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->next = *stack;
	new_node->prev = NULL;
	
	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
