#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and set the head to NULL.
 *
 * @head: linked list.
*/

void free_listint2(listint_t **head)
{
	listint_t *nextnode;

	nextnode = *head;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		free(*head);
		*head = nextnode;
	}
}
