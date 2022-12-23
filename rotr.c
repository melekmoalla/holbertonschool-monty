#include "monty.h"

void p_rotr(stack_t **stack, __attribute__((unused)) unsigned int count)
{
    int i = 0;

    if (*stack == NULL)
    {
        return;
    }

    stack_t *last = *stack, *h = *stack;
    
    while (h)
    {
        h = h->next;
        i++;
    }
    if (i < 2)
    {
        return;
    }
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