#include "monty.h"

/**
 * f_nop - Does nothing.
 * @head: Stack head (unused).
 * @counter: The current line number in the Monty bytecode
 * file (unused).
 *
 * Description:
 * - The nop opcode does nothing and is used as a placeholder.
 * - It takes no action on the stack or the program execution.
 * - Parameters (head and counter) are included for
 *   consistency with other opcode functions.
 */

void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
