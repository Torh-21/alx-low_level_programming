#include "lists.h"
/**
 * add_dnodeint - adds a new node at the
 * beginning of a dlistint_t list.
 *
 * @head: list head argument
 * @n: integer argument
 *
 * Return: address or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tempnode, *h;

	tempnode = malloc(sizeof(dlistint_t));
	if (tempnode == NULL)
		return (NULL);

	tempnode->n = n;
	tempnode->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	tempnode->next = h;
	if (h != NULL)
		h->prev = tempnode;
	*head = tempnode;
	return (tempnode);
}
