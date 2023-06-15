#include "lists.h"
/**
 * print_dlistint - print doubly linked list
 * @h: head of dll
 * Return: number of items
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count += 1;
	}
	return (count);
}
