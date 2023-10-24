#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 *
 * @head: linked list.
 * @index: is the index of the node that should be deleted. index start at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = *head;

	if (head == NULL || current == NULL)
		return (-1);

	if (index == 0)
	{
		current = current->next;
		free(*head);
		*head = current;
		return (1);
	}
	else
	{
		for (; index > 0; index--)
		{
			prev = current;
			current = current->next;


			if (current == NULL)
				return (-1);
		}
		prev->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
}
