#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a
 * linked dlistint_t list
 *
 * @h: linked list argument
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elemcount;

	elemcount = 0;
	if (h == NULL)
		return (elemcount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		elemcount++;
		h = h->next;
	}

	return (elemcount);
}
