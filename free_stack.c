#include "monty.h"

/**
* free_stack - Frees a doubly linked list representing a stack.
* @head: Pointer to the head of the stack
*
* Description:
* - The free_stack function iterates through the doubly linked list
*   and frees each node, starting from the head.
* - It releases the memory occupied by each element in the stack.
*
* Parameters:
* @head: A pointer to the head of the stack.
*The function assumes a valid doubly linked list.
*
* Return: No return value
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;

	/* Iterate through the doubly linked list */
	while (head)
	{
	aux = head->next;
		free(head);  /* Free the current node */
		head = aux;  /* Move to the next node */
	}
}
