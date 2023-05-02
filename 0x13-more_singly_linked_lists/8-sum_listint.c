#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a
 * lstint_t linked list
 *
 * @head: list argument
 *
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int total;

	total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total = total + (head->n);
		head = head->next;
	}

	return (total);
}
