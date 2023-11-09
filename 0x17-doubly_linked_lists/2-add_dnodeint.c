#include "list.h"

/**
 * add_dnodeint - adds a node at the begging of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: the integer for the new node
 *
 * return: if the function fails NULL, othrwise the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = *head;
	nnode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = nnode;

	*head = nnode;

	return (nnode);
}
