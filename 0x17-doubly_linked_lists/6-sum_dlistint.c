#include "lists.h"
/**
 * sum_dlistint - sum data in dll
 * @head: head of dll;
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
