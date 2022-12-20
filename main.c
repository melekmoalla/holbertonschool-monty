#include "monty.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    stack_t *stack;
    int number = 0;
    FILE *fa;
    ssize_t line = 1;
    size_t size = 0;
    char *c;

    if (argc < 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    fa = fopen(argv[1], "r");
    if (fa == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while (line > 0)
    {
        c = NULL;
        line = getline(&c, &size, fa);
        number++;
        if (line > 0)
        {
            execute(c, &stack, number);
        }
    }
    free(c);
    free_stack(stack);
    fclose(fa);
    return (0);
}

void f_push(stack_t **stack, unsigned int line_number)
{
    stack_t *new = NULL;

    if (stack == NULL)
        return;

    if (!val)
    {
        fprintf(stderr, "L%d:usage: usage: push integer\n", line_number);
        free(val);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    if (*stack == NULL)
    {
        new->prev = NULL;
        new->n = atoi(val);
        new->next = NULL;
        *stack = new;
    }
    else
    {
        new->prev = NULL;
        new->n = atoi(val);
        new->next = *stack;
        (*stack)->prev = new;
        *stack = new;
    }
}