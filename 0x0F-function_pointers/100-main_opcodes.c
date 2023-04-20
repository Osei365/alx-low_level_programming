#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	char *ptr;
	int a, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	nbytes = atoi(argv[1]);
	for (a = 0; a < nbytes - 1; a++)
	{
		printf("%02hhx ", ptr[a]);
	}
	printf("%02hhx\n", ptr[a]);
	return (0);
}
