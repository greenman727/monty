#include "monty.h"

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;
	h = *head
		while (h)
		{
			h = h->next;
			len++;
		}
		if (len < 2)
		{
			fprint(stdrr, "L%d: cant't add, stack too short\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		h = *head;
		aux = h->n + h->next->n;
		h->next = aux;
		*head = h->next;
		free(h);
}