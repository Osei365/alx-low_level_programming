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
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (ptr && a < idx)
	{
		if (a == idx - 1)
		{
			swap = ptr->next;
			ptr->next = new;
			new->next = swap;
			return (new);
		}
		ptr = ptr->next;
		a++;
	}
	return (NULL);
}
