#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 *
 * @head: list pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			currentNode = *head;
			*head = (*head)->next;
			free(currentNode);
		}
	}

	*head = NULL;
}
