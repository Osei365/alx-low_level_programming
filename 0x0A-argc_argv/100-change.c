#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _atoi(char *s);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if two arguments else 1
 */
int main(int argc, char *argv[])
{
	int num, count;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	count = 0;
	while (num > 0)
	{
		if (num >= 25)
		num = num - 25;
		else if (num < 25 && num >= 10)
		num = num - 10;
		else if (num < 10 && num >= 5)
		num = num - 5;
		else if (num < 5 && num >= 2)
		num = num - 2;
		else
		num = num - 1;
		count = count + 1;
	}
	printf("%d\n", count);
	return (0);
}
