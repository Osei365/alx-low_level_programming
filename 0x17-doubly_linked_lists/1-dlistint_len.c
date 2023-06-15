#include "lists.h"
/**
 * dlistint_len - returns length of dll
 * @h: head of dll
 * Return: length of dll
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t length = 0;

	while (current)
	{
		current = current->next;
		length++;
	}
	return (length);
}
