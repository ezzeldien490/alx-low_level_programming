#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 * @head: linkde list.
 *
 * Return: the head node's data(n).
*/

int pop_listint(listint_t **head)
{
	listint_t *nextnode;
	int i;

	nextnode = *head;
	if (nextnode == NULL)
	{
		return (0);
	}


	i = nextnode->n;
	nextnode = nextnode->next;
	free(*head);
	*head = nextnode;

	return (i);
}
