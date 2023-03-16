#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 *main - Entry point
 *
 *Return: 1 (error)
 */
int main(void)
{
	write(2, "and that piece", strlen("and that piece"));
	write(2, " of art is useful\"", strlen(" of art is useful\""));
	write(2, " - Dora Korpar,", strlen(" - Dora Korpar,"));
	write(2, " 2015-10-19\n", strlen(" 2015-10-19\n"));
	return (1);
}
