#include "monty.h"

void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{

    stack_t *new = *stack;

    if (stack == NULL || *stack == NULL)
        return;
    while (new)
    {
        if (new->n == 0)
        {
            break;
        }
        else
        {
            printf("%d\n", new->n);
            new = new->next;
        }
    }
}