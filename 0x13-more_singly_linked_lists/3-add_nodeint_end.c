#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: linked list.
 * @n: value.
 *
 * Return: the address of the new element, or NULL if it failed.
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	ptr = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}

	return (new);

}
