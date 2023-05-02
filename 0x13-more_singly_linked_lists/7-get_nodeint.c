#include "lists.h"
/**
 * get_nodeint_at_index - gets nth node of linked list
 * @head: the head of linked list
 * @index: index of linked list
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			break;
		head = head->next;
		n++;
	}
	if (n < index)
		return (NULL);
	return (head);
}
