#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * linear_skip - jump search with skip lists
 * @list: list to be searched
 * @value: value we are looking for
 * Return: node or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *back;

	if (list == NULL)
		return (NULL);
	back = list;
	while (list->next && list->n < value)
	{
		back = list;
		if (list->express)
		{
			list = list->express;
			printf("Value checked at index [%lu] = [%i]\n", list->index, list->n);
		}
		else
		{
			while (list->next)
				list = list->next;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		back->index, list->index);
	for (; back; back = back->next)
	{
		printf("Value checked at index [%lu] = [%i]\n", back->index, back->n);
		if (back->n == value)
			return (back);
	}
	return (NULL);
}
