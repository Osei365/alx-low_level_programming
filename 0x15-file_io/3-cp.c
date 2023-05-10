#include "main.h"

void print_readerr(char *filename);
/**
 * main - copies file
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd_var, cls_to, cls_from;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_readerr(argv[1]);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((rd_var = read(file_from, buffer, 1024)) > 0)
	{
		if (file_to == -1 || (write(file_to, buffer, rd_var) == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rd_var == -1)
	{
		print_readerr(argv[1]);
	}
	cls_from = close(file_from);
	cls_to = close(file_to);
	if (cls_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (cls_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

/**
 * print_readerr - prints read error
 * @filename: name of file
 */
void print_readerr(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
