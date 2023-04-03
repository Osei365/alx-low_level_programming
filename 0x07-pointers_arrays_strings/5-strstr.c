#include <string.h>
/**
 * _strstr - locates the first ccurence
 * of a string in another string
 * @haystack: string
 * @needle: string
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
