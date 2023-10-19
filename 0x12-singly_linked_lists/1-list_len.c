#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list.
 *
 * @h: linked list.
 *
 * Return: Number of elements in a linked list.
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	for (; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
