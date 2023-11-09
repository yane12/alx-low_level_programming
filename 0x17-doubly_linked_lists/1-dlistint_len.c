#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a dlist_int list
 * @h: the head of the list
 *
 * return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes += 1;
		h = h->next;
	}

	return (nodes);

}
