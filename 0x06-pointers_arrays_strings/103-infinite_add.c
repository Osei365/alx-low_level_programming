#include <string.h>
/**
 * infinite_add - adds two strings
 * @n1: among the strings to be added
 * @n2: this string too
 * @r: result is stored here
 * @size_r: size of r
 * Return: char *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, l1, l2, carr;

	l1 = strlen(n1);
	l2 = strlen(n2);
	n1 = n1 + l1 - 1;
	n2 = n2 + l2 - 1;
	*(r + size_r) = '\0';
	carr = 0;
	while (*n1 && *n2)
	{
		sum = carr + (*n1 - '0') + (*n2 - '0');
		*(r + (size_r - 1)) = (sum % 10) + '0';
		n2--;
		n1--;
		carr = sum / 10;
		size_r--;
	}
	while (*n1)
	{
		sum = carr + (*n1 - '0');
		*(r + (size_r - 1)) = (sum % 10) + '0';
		n1--;
		carr = sum / 10;
		size_r--;
	}
	while (*n2)
	{
		sum = carr + (*n2 - '0');
		*(r + (size_r - 1)) = (sum % 10) + '0';
		n2--;
		carr = sum / 10;
		size_r--;
	}
	*(r + (size_r - 1)) = carr % 10 + '0';
	size_r--;
	if (size_r > 0)
	return (r + (size_r));
	else
	return (0);
}
