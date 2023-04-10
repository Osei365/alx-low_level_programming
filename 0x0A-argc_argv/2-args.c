#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Return: (0) always Success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", *(argv + count));
	}
	return (0);
}
