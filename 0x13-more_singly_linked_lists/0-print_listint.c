#include "lists.h"
/**
 * print_listint - prints the elments if linked
 * list
 * @h: linked list
 * Return: number elements
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
