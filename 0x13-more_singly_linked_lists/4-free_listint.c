#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *swap;

	while (head)
	{
		swap = head->next;
		free(head);
		head = swap;
	}
}
