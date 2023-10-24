#include "lists.h"

/**
 * listint_len - return the number of elements in a linked listint_t list.
 *
 * @h: linked list.
 *
 * Return: number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
