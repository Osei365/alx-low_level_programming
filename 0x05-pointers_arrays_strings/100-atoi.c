#include <string.h>
/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int val = 0;
	int sign = 1;
	int count = 0;

	if (strlen(s) == 0)
	{
		return (0);
	}
	else
	{
		while (!(*s >= '0' && *s <= '9'))
		{
			if (*s == '-')
			{
				sign = sign * -1;
			}
			s++;
		}
		while (*s >= '0' && *s <= '9')
		{
			val = (val * 10) + (*s - '0');
			s++;
			count++;
		}
		if (count == 0)
		{
			sign = 0;
		}
		val = val * sign;
		return (val);
	}
}
