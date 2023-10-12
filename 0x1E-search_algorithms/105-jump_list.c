#include "search_algos.h"
#include <stdio.h>
#include <math.h>
size_t min(size_t a, size_t b);
/**
 * min -  find minimum
 * @a: first item in comparison
 * @b: second
 * Return: minimum
 */
size_t min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

/**
 * jump_list - jump search algo linked list
 * @list: list to search from
 * @size: size of array
 * @value: value of array
 * Return: node of value or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t a = 0, b;
	listint_t *back;

	if (!list || size == 0)
		return (NULL);
	b = sqrt(size);
	back = list;
	while (b < size)
	{
		while (list->index < b)
		{
			list = list->next;
		}
		printf("Value checked at index [%lu] = [%i]\n", b, list->n);
		if (list->n > value)
			break;
		back = list;
		a = b;
		b = b + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, min(b, size - 1));
	for (; a <= min(b, size - 1); a++, back = back->next)
	{
		printf("Value checked at index [%lu] = [%i]\n", a, back->n);
		if (back->n == value)
			return (back);
	}
	return (NULL);
}
