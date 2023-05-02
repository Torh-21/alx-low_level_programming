#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list
 *
 * @head: list argument
 * @index: index argument
 *
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeCount;
	listint_t *currentNode;

	nodeCount = 0;
	currentNode = head;

	while (currentNode != NULL)
	{
		if (nodeCount == index)
		{
			return (currentNode);
		}

		currentNode = currentNode->next;
		nodeCount++;
	}

	return (NULL);
}
