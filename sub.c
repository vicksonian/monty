#include "monty.h"
#include <stdio.h>

/**
 * f_sub - Subtracts the top element of the stack from the second top element.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty bytecode file.
 *
 * Description:
 * - The f_sub opcode subtracts the top element of the stack from the second
 *   top element.
 * - Parameters:
 *    - stack: A pointer to the top of the stack.
 *  It represents the stack on which the subtraction operation is performed.
 *    - line_number: The current line number in the Monty bytecode file.
 *      It is used for error reporting and tracking the program's progress.
 */

void f_sub(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;
	f_pop(stack, line_number);
}
