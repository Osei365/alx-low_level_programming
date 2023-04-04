#include <string.h>
/**
 * set_string - set value of pointer
 * to char
 * @s: pointer to pointer
 * @to: pointer
 * Return: nothing (void)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
