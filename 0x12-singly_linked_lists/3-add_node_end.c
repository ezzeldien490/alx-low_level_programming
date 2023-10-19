#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: linked list.
 * @str: data of new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	int size = strlen(str);
	list_t *new, *ptr;

	if (*head == NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = size;
		new->next = NULL;

		*head = new;
	}
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;

		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = size;
		new->next = NULL;

		ptr->next = new;
	}
	return (new);
}
