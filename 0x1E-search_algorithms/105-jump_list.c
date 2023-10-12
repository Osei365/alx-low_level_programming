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
	listint_t *back, *front;

	if (!list || size == 0)
		return (NULL);
	b = sqrt(size);
	back = front = list;
	while (b < size)
	{
		while (front->index < b)
		{
			front = front->next;
		}
		printf("Value checked at index [%lu] = [%i]\n", front->index, front->n);
		if (front->n > value)
			break;
		back = front;
		a = b;
		b = b + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		back->index, min(front->index, size - 1));
	for (; a <= min(b, size - 1); a++, back = back->next)
	{
		printf("Value checked at index [%lu] = [%i]\n", back->index, back->n);
		if (back->n == value)
			return (back);
	}
	return (NULL);
}
