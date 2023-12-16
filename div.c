#include "monty.h"
#include <stdio.h>

/**
* div_op - Divides the second top element of the stack by the top element.
* @stack: A pointer to the top of the stack.
* @line_number: The current line number in the Monty bytecode file.
*/
void f_div(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n /= (*stack)->n;
	f_pop(stack, line_number);
}
