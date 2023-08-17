#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 *
 * @h: list head argument
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodecount;

	nodecount = 0;
	if (h == NULL)
		return (nodecount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodecount++;
		h = h->next;
	}

	return (nodecount);
}
