#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: list argument
 *
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	size_t elemCount;

	elemCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elemCount++;
		h = h->next;
	}

	return (elemCount);
}
