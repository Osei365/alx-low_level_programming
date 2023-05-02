#include "lists.h"
/**
 * free_listint2 - free lists
 * @head: head of linkedlist
 */
void free_listint2(listint_t **head)
{
	listint_t *swap;

	if (head == NULL)
		return;
	while (*head)
	{
		swap = (*head)->next;
		free(*head);
		*head = swap;
	}
	*head = NULL;
}
