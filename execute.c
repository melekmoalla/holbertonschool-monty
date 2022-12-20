#include "monty.h"

int execute(char *cont, stack_t **stack, int number)
{

    instruction_t func[] = {
        {"push", f_push},
        {"pall", pall},
        {NULL, NULL}};

    int i = 0;
    char *op;

    op = strtok(cont, " \a\n\t");

    val = strtok(NULL, " \a\n\t");

    while (func[i].opcode && op)
    {
        if (strcmp(op, func[i].opcode) == 0)
        {
            func[i].f(stack, number);
            return (0);
        }
        i++;
    }
    if (op && func[i].opcode == NULL)
    {
        fprintf(stderr, "L%u: unknown instruction %s\n", number, cont);
        free(cont);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    return (1);
}
