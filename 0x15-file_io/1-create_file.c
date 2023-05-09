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
	int l;
	int write_var;

	l = strlen(text_content);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fl = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fl == -1)
			return (-1);
		return (1);
	}
	write_var = write(fl, text_content, l);
	if (write_var == -1)
	{
		close(fl);
		return (-1);
	}
	close(fl);
	return (1);
}
