#include "monty.h"

/**
 * _pall - prints all the elements of the stack
 * @stack: list to print its elements
 * @line_number: line number
 * Return: Nothing
 */
void _pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
