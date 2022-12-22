#include "monty.h"

void p_add(stack_t **stack, unsigned int counter)
{
    stack_t *h;
    int i = 0, a;

    h = *stack;
    if (h == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    while (h)
    {
        h = h->next;
        i++;
    }
    if (i < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    a = (*stack)->n + (*stack)->next->n;
    (*stack)->next->n = a;
    *stack = (*stack)->next;
}