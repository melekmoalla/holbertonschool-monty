#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void p_pchar(stack_t **stack, unsigned int line_number)
{
    // check if stack is empty
    if (stack == NULL || *stack == NULL)
    {
        printf("L%u: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    // retrieve value at top of stack
    int val = (*stack)->n;

    // check if value is in ASCII range
    if (val < 0 || val > 127)
    {
        printf("L%u: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    // print character corresponding to value
    printf("%c\n", val);

}