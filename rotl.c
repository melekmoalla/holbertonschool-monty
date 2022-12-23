#include "monty.h"

/**
 * p_rotl - prints the char starting at the top of the stack
 * @stack: stack_t
 * @count: unsigned int
 */

void p_rotl(stack_t **stack, __attribute__((unused)) unsigned int count)
{

	stack_t *h = *stack;
	int a;

	if (stack == NULL || *stack == NULL)
	{
		return;
	}

	while (h->next != NULL)
	{
		a = h->n;
		h->n = h->next->n;
		h->next->n = a;
		h = h->next;
	}
}
