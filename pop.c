#include "monty.h"
#include <stdio.h>

/**
* pop - Removes the top element of the stack.
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
