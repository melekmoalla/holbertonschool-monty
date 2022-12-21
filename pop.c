#include "monty.h"

void p_pop(stack_t **stack, unsigned int counter)
{
    stack_t *h;

    h = *stack;
    if (h == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    else
    {
        free(*stack);
        h = h->next;
        *stack = h;
    }
}