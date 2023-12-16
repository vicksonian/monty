#include "monty.h"
#include <stdio.h>

/**
 * f_pop - Removes the top element of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty bytecode file.
 *
 * Description:
 * - This function implements the pop operation for the Monty bytecode
 *   instruction 'pop'.
 * - It removes the top element of the stack.
 * - If the stack is empty, it prints an error message and exits
 *   with EXIT_FAILURE.
 *
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty bytecode file.
 */


void f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;

	if (*stack != NULL)
		(*stack)->prev = NULL;

	free(temp);
}
