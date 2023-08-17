#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 *
 * @head: list head argument
 * @n: integer argument
 *
 * Return: the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *tempnode;

	tempnode = malloc(sizeof(dlistint_t));
	if (tempnode == NULL)
		return (NULL);

	tempnode->n = n;
	tempnode->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = tempnode;
	}
	else
		*head = tempnode;

	tempnode->prev = h;
	return (tempnode);
}
