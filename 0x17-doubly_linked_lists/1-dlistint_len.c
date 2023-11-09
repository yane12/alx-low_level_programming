#include "list"


/**
 * dlistint_len - counts and returns number of elements of a dlistint_t list.
 * @h: pointer to head of the list
 * Return: number of nodes in the list
 **/
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
