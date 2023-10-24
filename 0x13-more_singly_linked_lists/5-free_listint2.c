#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and set the head to NULL.
 *
 * @head: linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *nextnode;
	listint_t *freenode;

	if (head != NULL)
	{

		nextnode = freenode = *head;
		while (nextnode != NULL)
		{
			freenode = nextnode;
			nextnode = nextnode->next;
			free(freenode);
		}
		*head = NULL;
	}
}
