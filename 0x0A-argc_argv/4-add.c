#include <stdio.h>
#include <string.h>

int _atoi(char *s);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if two arguments else 1
 */
int main(int argc, char *argv[])
{
	int sum, a;
	char *n;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		n = argv[a];
		for (; *n; n++)
		{
			if (!(*n >= '0' && *n <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + _atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}

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
