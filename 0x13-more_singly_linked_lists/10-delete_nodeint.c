#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of linked list
 * @index: index of linked list
 * Return: 1 or -1 as the case may be
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *swap, *ptr = *head;

	if (!(*head))
		return (-1);
	if (head && index == 0)
	{
		swap = (*head)->next;
		free(*head);
		*head = swap;
		return (1);
	}

	while (ptr)
	{
		if (a == index - 1)
		{
			swap = (ptr->next)->next;
			free(ptr->next);
			ptr->next = swap;
			a++;
			return (1);
		}
		ptr = ptr->next;
		a++;
	}

	return (-1);
}
