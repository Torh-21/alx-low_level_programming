#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: list argument
 * @n: integer argument
 *
 * Return: list address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		listint_t *newListNode = (listint_t *)malloc(sizeof(listint_t));

		if (newListNode == NULL)
		{
			return (NULL);
		}

		newListNode->n = n;
		newListNode->next = NULL;

		if (*head == NULL)
		{
			*head = newListNode;
		}
		else
		{
			listint_t *current = *head;

			while (current->next != NULL)
				current = current->next;

			current->next = newListNode;
		}

		return (newListNode);
	}
}
