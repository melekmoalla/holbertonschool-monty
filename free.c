#include "monty.h"

void free_stack(stack_t *stack)
{
    stack_t *a;

    while (a)
    {
        a = stack;
        stack = stack->next;
        free(a);
    }
}