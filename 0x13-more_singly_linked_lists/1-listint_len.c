#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked lists
 * @h: linked list of type listint_t
 *
 * Return: number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
return (b);
}

