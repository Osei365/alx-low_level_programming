#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename of file to be vcreated
 * @text_content: text content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fl;
	int l = 0;
	int write_var;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		l = strlen(text_content);
	}
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	write_var = write(fl, text_content, l);
	if (fl == -1 || write_var == -1)
	{
		return (-1);
	}
	close(fl);
	return (1);
}
