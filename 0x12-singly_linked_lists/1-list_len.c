#include "lists.h"
/**
 * list_len - returns count of list elements
 * @h: linked list head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n_el = 0;

	while (h)
	{
		n_el++;
		h = h->next;
	}
	return (n_el);
}
