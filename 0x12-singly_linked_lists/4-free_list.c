#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 *
 * @head: linked list.
*/

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
