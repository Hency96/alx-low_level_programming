#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: pointer to the first element in a linked list
 *
 * Return: data inside the elements that was deleted
 * or 0 if the list is null
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int nu;

	if (!head || !*head)
	return (0);

	nu = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (nu);
}
