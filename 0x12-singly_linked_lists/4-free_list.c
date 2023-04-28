#include "main.h"
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
		swap = head;
		free(head->str);
		free(head);
		head = swap;
	}
}
