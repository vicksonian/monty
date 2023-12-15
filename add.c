#include "monty.h"
#include <stdio.h>

/**
* add - Adds the top two elements of the stack.
* @stack: A pointer to the top of the stack.
* @line_number: The current line number in the Monty bytecode file.
*/
void add(stack_t **stack, unsigned int line_number)
{
if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n += (*stack)->n;
pop(stack, line_number);
}
