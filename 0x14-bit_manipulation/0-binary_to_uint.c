#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary to be converted
 * Return: decimal (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, pow = 1;
	int len;

	if (!b)
		return (0);

	len = strlen(b);
	len--;
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			dec = dec + pow;
		}
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len--;
		pow *= 2;
	}
	return (dec);
}
