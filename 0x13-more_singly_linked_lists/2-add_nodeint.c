#include "lists.h"
/**
 * add_nodeint - add node to beginning
 * @head: linked list head
 * @n: number to add
 * Return: return new header address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
