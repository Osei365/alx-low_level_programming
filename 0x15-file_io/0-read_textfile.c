#include "main.h"
/**
 * read_textfile - reads a textfile and prints to
 * to POSIX stdout
 * @filename: file name to print into
 * @letters: letters to write
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fl, read_var, write_var;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
	{
		free(buffer);
		return (0);
	}
	read_var = read(fl, buffer, letters);
	if (read_var == -1)
	{
		free(buffer);
		close(fl);
		return (0);
	}
	write_var = write(STDOUT_FILENO, buffer, read_var);
	if (write_var == -1)
	{
		free(buffer);
		close(fl);
		return (0);
	}
	close(fl);
	free(buffer);
	return (write_var);
}
