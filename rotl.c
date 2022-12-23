#include "monty.h"

/**
 * p_pall - prints all the values on the stack
 * @stack: stack_t
 * @count: unsigned int
 */

void p_rotl(stack_t **stack, __attribute__((unused)) unsigned int count)
{

    stack_t *h = *stack;
    int a;

    if (stack == NULL || *stack == NULL)
    {
        putchar('\n');
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