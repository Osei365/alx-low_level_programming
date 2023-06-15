#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at an index
 * @head: headd of dll
 * @index: index to retrieve
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
