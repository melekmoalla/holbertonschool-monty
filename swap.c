#include "monty.h"

void p_swap(stack_t **stack, unsigned int counter)
{
    stack_t *prev = NULL, *next_node = NULL, *h;
    int i = 0;

    h = *stack;
    if (h == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
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
        fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    while ((*stack))
    {
        next_node = (*stack)->next;
        (*stack)->next = prev;
        prev = (*stack);
        (*stack) = next_node;
    }
    *stack = prev;
}