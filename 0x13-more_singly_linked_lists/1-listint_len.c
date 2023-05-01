#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: list argument
 *
 * Return: integer
 */
size_t listint_len(const listint_t *h)
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
