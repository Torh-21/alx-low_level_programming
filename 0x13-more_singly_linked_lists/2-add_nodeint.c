#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: list argument
 * @n: integer argument
 *
 * Return: integer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		listint_t *newListNode = malloc(sizeof(listint_t));

		if (newListNode == NULL)
			return (NULL);

		newListNode->n = n;
		newListNode->next = *head;

		*head = newListNode;

		return (newListNode);
	}
}
