#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position.
 *
 * @head: linked list.
 * @idx: index of the list where the new node should be added,index starts at 0
 * @n: data of newnode.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr;
	int i = idx - 1;

	ptr = *head;
	if (head == NULL)
		return (NULL);

	if (ptr == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (new);

	}
	else
	{
		for (; i > 0; i--)
		{
			ptr = ptr->next;

			if (ptr == NULL)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
}
