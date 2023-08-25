#include "monty.h"
/*
 * f_pall - function to printthe stack.
 * @counter: not used
 * @head: the stack head.
 * Return: no return.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h
	(void)counter;
	h = *head;
	if (h = NULL)
		return;
	while (h)
	{
		printf("%d\n",h->n);
		h = h->next;
	}
}
