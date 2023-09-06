#include "monty.h"

/**
 * op_pall - prints all the elements of the stack
 * @stack: list to print its elements
 * @line_number: line number
 * Return: Nothing
 */
void _pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	while ((*stack) != NULL)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
	}
}
