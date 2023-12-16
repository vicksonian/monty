#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty bytecode file.
 *
 * Description:
 * - The f_rotr opcode rotates the stack to the bottom by moving the top
 *   element
 *   to the bottom of the stack.
 * - Parameters:
 *    - stack: A pointer to the top of the stack.
 *      It represents the stack that is rotated.
 *    - line_number: The current line number in the Monty bytecode file.
 *      It is used for error reporting and tracking the program's progress.
 */

void f_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = temp;
	temp->prev->next = NULL;
	temp->prev = NULL;
}
