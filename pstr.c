#include "monty.h"
#include <stdio.h>

/**
* pstr - Prints the string starting at the top of the stack.
* @stack: A pointer to the top of the stack.
* @line_number: The current line number in the Monty bytecode file.
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
