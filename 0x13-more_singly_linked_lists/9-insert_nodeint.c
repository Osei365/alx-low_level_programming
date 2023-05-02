#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node into a linked list
 * @head: head of linked list
 * @idx: indexto insert into linked list
 * @n: value to insert
 * Return: node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *swap, *new;
	listint_t *ptr = *head;
	unsigned int a = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = ptr;
		ptr = new;
		return (ptr);
	}
	while (ptr)
	{
		if (a == idx - 1)
		{
			swap = ptr->next;
			ptr->next = new;
			ptr = new;
			if (swap)
				ptr->next = swap;
			break;
		}
		ptr = ptr->next;
		a++;
	}
	if (a < idx)
		return (NULL);
	return ptr;
}
