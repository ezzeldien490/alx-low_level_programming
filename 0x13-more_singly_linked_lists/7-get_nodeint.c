#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t linked list.
 *
 * @head: linked list.
 * @index: is the index of the node, starting at 0.
 *
 * Return: the nth node of a listint_t linked list.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *xnode;
	int i = index;
	
	if (head == NULL)
		return (NULL);

	xnode = head;
	for (; i > 0; i--)
	{
		xnode = xnode->next;
	}

	return (xnode);
}
