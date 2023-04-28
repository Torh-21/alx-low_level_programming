#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: list argument
 * @str: node argument
 *
 * Return: address or NULL
 */
list_t *add_node(list_t **head, const char *str)
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
		newListNode->next = *head;

		*head = newListNode;

		return (newListNode);
	}
}
