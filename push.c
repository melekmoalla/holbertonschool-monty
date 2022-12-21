#include "monty.h"

void p_push(stack_t **stack, unsigned int counter)
{
    int n, i = 0, z;

    if (val)
    {
        if (val[0] == '-')
            i++;
        for (; val[i] != '\0'; i++)
        {
            if (val[i] > '9' || val[i] < '0')
            {
                z = 1;
            }
        }
        if (z == 1)
        {
            fprintf(stderr, "L%d: usage: push integer\n", counter);
            free_stack(*stack);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    n = atoi(val);

    add_node(stack, n);
}