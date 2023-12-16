#include "monty.h"
#include <stdio.h>

/**
* f_mod - Computes the rest of the division of the second
* top element by the top element.
* @stack: A pointer to the top of the stack.
* @line_number: The current line number in the Monty bytecode file.
*
*  * Description:
 * - Computes the remainder of dividing the second top
 *   element by the top element.
 * - Removes the top element of the stack.
 * - Exits with EXIT_FAILURE and prints an error message
 *   if the stack is too short
 *   or if the top element is zero.
*/
void f_mod(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
	fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	f_pop(stack, line_number);
}
