#include "main.h"
/**
 * append_text_to_file - append a text to a file
 * @filename: file name
 * @text_content: text content
 * Return: return 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, l, write_var;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);
	l = strlen(text_content);
	write_var = write(fl, text_content, l);
	if (write_var == -1)
	{
		close(fl);
		return (-1);
	}
	close(fl);
	return (1);
}
