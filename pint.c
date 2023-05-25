#include "monty.h"
/**
 * f_pint - function that prints the top
 * @head: head
 * @counter: number of line
 * Return: void
 */

void f_pint(stack_t **head, unsigned int counter)
{       
        if (*head == NULL)
        {       
                fprintf(stderr, "L%U: can't pint, stack empty\n",counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FSILIRE);
        }       
        printf("%d\n", (*head)->n);
}
