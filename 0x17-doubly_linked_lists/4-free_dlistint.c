#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: list head argument
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempnode;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tempnode = head) != NULL)
	{
		head = head->next;
		free(tempnode);
	}
}
