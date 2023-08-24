#include "monty.h"

void f-pop(stack_t **head, unsigned int counter)
{
	stack_t *h
	if (*head == NULL)
	{
		fprintf(stdrr, 'L%d: can't pop stack\n, counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
