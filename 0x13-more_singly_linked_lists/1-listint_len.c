#include "lists.h"
/**
 * listint_len - calcs length of h
 * @h: linked list pointer
 * Return: length of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *ptr = &h;
	
	while (ptr)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
