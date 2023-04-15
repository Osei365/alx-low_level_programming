#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

int _isdigit(char *s);
void error(void);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int a, b, i, c, d = 0, *result, carry, l1, l2, l, dig1, dig2;
	char *s1, *s2;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !_isdigit(s1) || !_isdigit(s2))
	error();
	l1 = strlen(s1);
	l2 = strlen(s2);
	l = l1 + l2 + 1;
	result = (int *)malloc(sizeof(int) * l);
	if (result == NULL)
	return (1);
	for (i = 0; i <= l - 1; i++)
	result[i] = 0;
	for (a = l1 - 1; a >= 0; a--)
	{
		dig1 = s1[a] - '0';
		carry = 0;
		for (b = l2 - 1; b >= 0; b--)
		{
			dig2 = s2[b] - '0';
			carry += result[a + b + 1] + (dig1 * dig2);
			result[a + b + 1] = carry % 10;
			carry = carry / 10;
		}
		if (carry > 0)
		result[a + b + 1] += carry;
	}
	for (c = 0; c < l - 1; c++)
	{
		if (result[c])
			d = 1;
		if (d)
			_putchar(result[c] + '0');
	}
	_putchar('\n');
	free(result);
	return (0);
}

/**
 * _isdigit - checks if digit
 * @s: argument
 * Return: 1 or 0
 */
int _isdigit(char *s)
{
	int a;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
		{
			return (0);
		}
		a++;
	}
	return (a);
}

/**
 * error - prints error
 * Return: nothing
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}
