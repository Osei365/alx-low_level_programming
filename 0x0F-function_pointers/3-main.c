#include "3-calc.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Return: (0) or (1)
 */
int main(int argc, char *argv[])
{
	char *ch = "+-*/%";
	int a, b, result;
	int (*f)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strstr(ch, argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (('/' == *argv[2] || '%' == *argv[2]) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
