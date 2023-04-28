#include "lists.h"
/**
 * add_node - adds node to beginning of node
 * @head: head of linked list
 * @str: string content
 * Return (new head)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	unsigned int l;

	l = strlen(str);
	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = l;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
