#include "monty.h"

/**
 * p_pchar - prints the char at the top of the stack, followed by a new line
 * @stack: head linked list - stack
 * @count: line_counte
 */

void p_pchar(stack_t **stack, unsigned int count)
{

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", count);
		exit(EXIT_FAILURE);
	}


	int val = (*stack)->n;


	if (val < 0 || val > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", count);
		exit(EXIT_FAILURE);
	}


	printf("%c\n", val);
}
