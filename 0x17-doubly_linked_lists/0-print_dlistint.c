#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint
 * @h: the head of dlistint
 *
 * return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	ssizt_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);

}
