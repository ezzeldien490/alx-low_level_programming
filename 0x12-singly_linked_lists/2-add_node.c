#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: linked list.
 * @str: date in new node.
 *
 * Return: The address of the new element, or null of it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	char *str2 = strdup(str);
	int size = strlen(str2);

	list_t *temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = str2;
	temp->len = size;
	temp->next = *head;

	*head = temp;

	return (temp);
}
