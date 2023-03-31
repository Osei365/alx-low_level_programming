#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of byte
 * Return: nothing (void)
 */
void print_buffer(char *b, int size)
{
	int byte, in;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		for (in = 0; in < 10; in++)
		{
			if ((byte + in) >= size)
			printf("  ");
			else
			printf("%02x", *(b + (byte + in)));
			if ((in + 1) % 2 == 0)
			{
				printf(" ");
			}
		}
		for (in = 0; in < 10; in++)
		{
			if (byte + in >= size)
			break;
			else
			{
				if (*(b + (byte + in)) >= 31 && *(b + (byte + in)) <= 126)
				{
					putchar(*(b + (byte + in)));
				}
				else
				printf(".");
			}
		}
		printf("\n");
	}
	if (size <= 0)
	printf("\n");
}
