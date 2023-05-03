#include "lists.h"
/**
 * reverse_listint - reverse linked list
 * @head: head of linked list
 * Return: pointer to first node of reversed
 * string
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *swap = NULL;

	while (*head)
	{
		swap = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = swap;
	}
	*head = ptr;
	return (*head);
}
