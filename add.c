#include "monty.h"
#include <stdio.h>

/**
 * f_add - Adds the top two elements of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty bytecode file.
 *
 * Description:
 * - The f_add opcode adds the values of the top two elements of the stack.
 * - Parameters:
 *    - stack: A pointer to the top of the stack.
 *      It represents the stack where addition is performed.
 *    - line_number: The current line number in the Monty bytecode file.
 *      It is used for error reporting and tracking the program's progress.
 */

void f_add(stack_t **stack, unsigned int line_number)
{
if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n += (*stack)->n;
f_pop(stack, line_number);
}
