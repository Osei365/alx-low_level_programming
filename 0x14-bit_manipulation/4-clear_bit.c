#include "main.h"
/**
 * clear_bit - sets value of bit to zero
 * at given index
 * @n: number in question
 * @index: index position to be cleared
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int left;
	unsigned long int right;

	if (index > 64)
		return (-1);
	left = 1 << index;
	right = *n >> index;
	if ((right & 1) == 1)
	*n = *n - left;
	return (1);
}
