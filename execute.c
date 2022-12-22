#include "monty.h"
/**
 * execute - executes the opcode
 * @stack: head linked list - stack
 * @counter: line_counter
 * @file: poiner to monty file
 * @content: line content
 * Return: no return
 */
int execute(char *cont, stack_t **stack, unsigned int count, FILE *file)
{

    instruction_t opst[] = {{"push", p_push},
                            {"pall", p_pall},
                            {"pint", p_pint},
                            {"pop", p_pop},
                            {"swap", p_swap},
                            {"add", p_add},
                            {NULL, NULL}};

    int i = 0;
    char *op;

    op = strtok(cont, " \n\t");

    val = strtok(NULL, " \n\t");

    while (opst[i].opcode && op)
    {
        if (strcmp(op, opst[i].opcode) == 0)
        {
            opst[i].f(stack, count);
            return (0);
        }
        i++;
    }
    if (op && opst[i].opcode == NULL)
    {
        fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
        fclose(file);
        free(cont);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    return (1);
}