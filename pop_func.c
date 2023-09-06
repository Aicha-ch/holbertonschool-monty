#include "monty.h"

/**
 * _pop - Removes the top element of the stack.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty file.
 */

void _pop(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    stack_t *temp = *stack;
    *stack = (*stack)->next;
    if (*stack != NULL)
        (*stack)->prev = NULL;
    free(temp);
}
