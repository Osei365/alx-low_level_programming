#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Return: (0) or (1)
 */
int main(int argc, char *argv[])
{
	char *ch = "+-/*%";
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}
	if (strstr(ch, argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
		return (1);
	}
	if ((strstr("/%", argv[2]) != NULL) && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
