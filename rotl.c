#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: A pointer to the top of the stack.
 * @counter: The current line number in the Monty bytecode file (unused).
 *
 * Description:
 * - This function implements the rotl operation for the Monty bytecode
 *   instruction 'rotl'.
 * - It rotates the stack to the top by moving the top element to the
 *   bottom.
 *
 * @head: A pointer to the top of the stack.
 * @counter: The current line number in the Monty bytecode file (unused).
 */


void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
