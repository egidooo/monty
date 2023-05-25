#include "monty.h"
/**
 * f_pall - function tha tprints the stack
 * @head: head
 * @counter: non
 * Return: void
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *k;
	(void)counter;

	k = *head;
	if (h == NULL)
		return;
	while (k)
	{
		printf("%d\n", k->n);
		k = k->next;
	}
}
