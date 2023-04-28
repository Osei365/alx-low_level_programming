#include "lists.h"
/**
 * add_node_end - adds node to end
 * @head: head of node
 * @str: string content in node
 * Return: the address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr = *head;
	unsigned int l;

	l = strlen(str);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = l;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next)
	{
		ptr = ptr->next;
	}

	ptr->next = new_node;

	return (new_node);
}
