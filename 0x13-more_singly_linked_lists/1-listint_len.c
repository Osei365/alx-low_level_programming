#include "lists.h"
/**
 * listint_len - calcs length of h
 * @h: linked list pointer
 * Return: length of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;
	
	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
