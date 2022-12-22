#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void p_pchar(stack_t **stack, unsigned int count)
{
    // check if stack is empty
    if (stack == NULL || *stack == NULL)
    {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", count);
        exit(EXIT_FAILURE);
    }

    // retrieve value at top of stack
    int val = (*stack)->n;

    // check if value is in ASCII range
    if (val < 0 || val > 127)
    {
        fprintf(stderr, "L%u: can't pchar, value out of range\n", count);
        exit(EXIT_FAILURE);
    }

    // print character corresponding to value
    printf("%c\n", val);
}