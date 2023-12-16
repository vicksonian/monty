#include "monty.h"
#include <stdio.h>

/**
 * f_pstr - Prints the string starting at the top of the stack.
 * @head: A pointer to the top of the stack.
 * @counter: The current line number in the Monty bytecode file.
 *
 * Description:
 * - The f_pstr opcode prints the string represented by the ASCII values
 *   on the stack until it reaches a non-printable character or the stack is
 *   empty.
 * - Parameters:
 *    - head: A pointer to the top of the stack.
 *      It represents the stack where the string is read from.
 *    - counter: The current line number in the Monty bytecode file.
 *      It is used for error reporting and tracking the program's progress.
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
