#include "monty.h"
#include <stdio.h>

/**
* stack - Sets the format of the data to a stack (LIFO).
* @stack: A pointer to the top of the stack.
* @line_number: Current line number in Monty bytecode file.
*/

void stack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;
}

/**
* queue - Sets the format of the data to a queue (FIFO).
* @stack: A pointer to the top of the stack.
* @line_number: Current line number in Monty bytecode file.
*/

void queue(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;

	if (*stack == NULL)
		return;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	temp->next->next = NULL;
}
