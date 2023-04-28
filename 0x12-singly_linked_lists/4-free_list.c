#include "lists.h"
/**
 * free_list - fress a linked list
 * @head: head of linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *swap;

	while (head)
	{
		swap = head->next;
		free(head->str);
		free(head);
		head = swap;
	}
}
