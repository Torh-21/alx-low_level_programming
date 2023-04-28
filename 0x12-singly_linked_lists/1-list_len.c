#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: argument list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elemCount;

	elemCount = 0;

	while (h != NULL)
	{
		elemCount++;
		h = h->next;
	}

	return (elemCount);
}
