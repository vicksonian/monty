#include "monty.h"
#include <stdio.h>

/**
 * f_mul - Multiplies the second top element of the stack with the top element.
 * @head: A pointer to the top of the stack.
 * @counter: The current line number in the Monty bytecode file.
 *
 * Description:
 * - This function implements the multiplication operation for the Monty
 *   bytecode instruction 'mul'.
 * - It multiplies the second top element of the stack with the top element.
 * - If the stack is less than two elements, it prints an error message and
 *   exits with EXIT_FAILURE.
 *
 * @head: A pointer to the top of the stack.
 * @counter: The current line number in the Monty bytecode file.
 */

void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
