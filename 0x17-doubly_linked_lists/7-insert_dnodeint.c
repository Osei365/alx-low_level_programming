#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at index
 * @h: head of dll
 * @idx: index value
 * @n: data to be added
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h, *temp;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h == NULL)
			new->next = NULL;
		else
		{
			new->next = *h;
			(*h)->prev = new;
		}
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (current)
	{
		if (count == idx - 1)
		{
			temp = current->next;
			current->next = new;
			new->prev = current;
			new->next = temp;
			temp->prev = new;
			return (new);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
