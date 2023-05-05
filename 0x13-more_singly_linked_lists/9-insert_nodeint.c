#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: list argument
 * @idx: index argument
 * @n: node integer argument
 *
 * Return: node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodeCount;
	listint_t *currentNode, *newNode;

	newNode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}

	currentNode = *head;
	nodeCount = 0;

	while (currentNode != NULL && nodeCount < (idx - 1))
	{
		currentNode = currentNode->next;
		nodeCount++;
	}

	if (currentNode == NULL || currentNode->next == NULL)
		return (NULL);

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}
