#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of dll
 * @index: index position to be deleted
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current, *ptr = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0 && *head)
	{
		current = (*head)->next;
		free(*head);
		if (current)
			current->prev = NULL;
		*head = current;
		return (1);
	}
	while (ptr)
	{
		if (count == index)
		{
			current = ptr->next;
			temp = ptr->prev;
			current->prev = temp;
			temp->next = current;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		count++;
	}
	return (-1);
}
