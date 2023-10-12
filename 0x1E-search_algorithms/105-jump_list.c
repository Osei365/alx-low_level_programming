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
	size_t a = 0, b = sqrt(size);
	listint_t *back, *front;

	if (!list || size == 0)
		return (NULL);
	back = front = list;
	while (front->next && front->index < b)
		front = front->next;
	while (front->index < size - 1 && front->n <= value)
	{
		printf("Value checked at index [%lu] = [%i]\n", front->index, front->n);
		back = front;
		a = b;
		b = b + sqrt(size);
		while (front->next && front->index < b)
			front = front->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		back->index, front->index);
	for (; a <= min(b, size - 1); a++, back = back->next)
	{
		printf("Value checked at index [%lu] = [%i]\n", back->index, back->n);
		if (back->n == value)
			return (back);
	}
	return (NULL);
}
