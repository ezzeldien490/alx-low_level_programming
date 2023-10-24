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
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr;
	int i = idx - 1;

	ptr = *head;
	if (new == NULL || ptr == NULL)
		return (NULL);

	for (; i > 0 && ptr != NULL; i--)
	{
		ptr = ptr->next;
	}
	new->n = n;
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
