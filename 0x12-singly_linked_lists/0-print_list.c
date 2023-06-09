#include "lists.h"
/**
 * print_list - prints all the elements of a lists_t list
 *
 * @h: argument list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount;

	nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
