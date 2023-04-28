#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of linked list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
