#include "monty.h"

void p_pint(stack_t **stack, unsigned int counter)
{
    stack_t *h;

    h = *stack;
    if (h == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("%d\n", h->n);
    }
}