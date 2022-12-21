#include "monty.h"

void p_push(stack_t **stack, unsigned int counter)
{
    int n, j = 0;

    if (val)
    {
        for (j = 0; val[j] != '\0'; j++)
        {
            if (val[j] > '9' || val[j] < '0')
            {
                fprintf(stderr, "L%d: usage: push integer\n", counter);
                free_stack(*stack);
                exit(EXIT_FAILURE);
                break;
            }
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