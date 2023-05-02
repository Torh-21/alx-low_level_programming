#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list and
 * returns the head node's data
 *
 * @head: list argument
 *
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tempHead;

	if (*head == NULL)
	{
		return (0);
	}

	tempHead = *head;
	value = tempHead->n;
	*head = (*head)->next;
	free(tempHead);

	return (value);
}
