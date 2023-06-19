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
	int l;

	l = strlen(s);
	if (l == 0)
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
			l--;
		}
		if (l > 0)
		{
			while ((*s >= '0' && *s <= '9'))
			{
				val = (val * 10) + (*s - '0');
				s++;
			}
		}
		val = val * sign;
		return (val);
	}
}
