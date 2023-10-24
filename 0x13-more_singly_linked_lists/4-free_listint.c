#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: linked list.
*/

void free_listint(listint_t *head)
{
	listint_t *nextnode;

	nextnode = head;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		free(head);
		head = nextnode;
	}
}
