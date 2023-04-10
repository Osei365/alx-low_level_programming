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
	int arg1, arg2;

	if (!(argc == 3))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		arg1 = _atoi(argv[1]);
		arg2 = _atoi(argv[2]);

		printf("%d\n", arg1 * arg2);
		return (0);
	}
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
