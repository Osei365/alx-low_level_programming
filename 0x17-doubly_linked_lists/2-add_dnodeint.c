#include "lists.h"
/**
 * add_dnodeint - adds a node to dll
 * @head: head of dll
 * @n: data to be added
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
	}
	new->prev = NULL;
	*head = new;
	return (new);
}
