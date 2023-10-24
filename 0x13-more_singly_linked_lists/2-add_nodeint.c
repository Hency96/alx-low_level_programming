#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linked list
 * @head: pointer to the first node
 * @n: data which will be inserted in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *na;

	na = malloc(sizeof(listint_t));
	if (!na)
	return (NULL);
	na->n = n;
	na->next = *head;
	*head = na;

return (na);
}

