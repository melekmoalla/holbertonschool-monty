#include "monty.h"

void p_rotr(stack_t **stack, __attribute__((unused)) unsigned int count)
{
    if (*stack == NULL)
    {
        return;
    }

    stack_t *last = *stack;

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->prev->next = NULL;
    last->prev = NULL;
    last->next = *stack;
    (*stack)->prev = last;

    *stack = last;
}