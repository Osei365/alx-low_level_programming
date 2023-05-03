#include "lists.h"
/**
 * listint_len - calcs length of h
 * @h: linked list pointer
 * Return: length of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
