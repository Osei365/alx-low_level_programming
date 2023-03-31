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
	for (; *n1 && *n2; n2--, n1--, size_r--)
	{
		sum = carr + (*n1 - '0') + (*n2 - '0');
		*(r + (size_r - 1)) = (sum % 10) + '0';
		carr = sum / 10;
	}
	for (; *n1; n1--, size_r--)
	{
		sum = carr + (*n1 - '0');
		*(r + (size_r - 1)) = (sum % 10) + '0';
		carr = sum / 10;
	}
	for (; *n2; n2--, size_r--)
	{
		sum = carr + (*n2 - '0');
		*(r + (size_r - 1)) = (sum % 10) + '0';
		carr = sum / 10;
	}
	if (carr && size_r - 1 > 0)
	{
		*(r + (size_r - 1)) = (carr % 10) + '0';
		return (r + size_r - 1);
	}
	else
	return (0);
	return (r + size_r);
}
