#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * rint_list - prints all the elements of a list_t list.
 *
 * @h: linked list
 *
 * Return: The number of nodes.
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	for (; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (count);
}
