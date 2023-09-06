#include "monty.h"

/**
 * _swap - Swaps the top two elements of the stack.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number in the Monty file.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int temp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
}
