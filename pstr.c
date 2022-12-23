#include "monty.h"

/**
 * p_pstr - prints the string starting at the top of the stack.
 * @stack: stack_t
 * @count: unsigned int
 */

void p_pstr(stack_t **stack, __attribute__((unused)) unsigned int count)
{

	if (stack == NULL || *stack == NULL)
	{
		putchar('\n');
		return;
	}

	stack_t *current = *stack;

	while (current != NULL)
	{

		if (current->n < 32 || current->n > 126 || current->n == 0)
		{
			break;
		}

		putchar(current->n);

		current = current->next;
	}

	putchar('\n');
}
