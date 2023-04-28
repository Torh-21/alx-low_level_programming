#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: list argument
 * @str: string argument
 *
 * Return: address or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *tempStr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		list_t *newListNode = (list_t *)malloc(sizeof(list_t));

		if (newListNode == NULL)
			return (NULL);

		tempStr = strdup(str);
		if (tempStr == NULL)
		{
			free(newListNode);
			return (NULL);
		}

		newListNode->str = tempStr;
		newListNode->len = strlen(str);
		newListNode->next = NULL;

		if (*head == NULL)
		{
			*head = newListNode;
		}
		else
		{
			list_t *current = *head;

			while (current->next != NULL)
				current = current->next;

			current->next = newListNode;
		}

		return (newListNode);
	}
}
