#include "lists.h"
/**
 * pop_listint - deletes the head
 * @head: head of linked list
 * Return: value in linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *swap;
	int n;

	if (*head == NULL)
		return (0);
	swap = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = swap;
	return (n);
}
