#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: linked list
 *
 * Return: The number of nodes.
*/

size_t print_list(const list_t *h)
{
	int count;

	list_t *ptr = malloc(sizeof(list_t));
	*ptr = *h;

	for (count = 0; ptr != NULL; count++)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
	}
	return (count);
}
