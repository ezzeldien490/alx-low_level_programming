#include "lists.h"

/**
 * sum_listint - sum of all the data of a listint_t linked list.
 *
 * @head: linked list.
 *
 * Return: sum of data, or 0 if empty.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
