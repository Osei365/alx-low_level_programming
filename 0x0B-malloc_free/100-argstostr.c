#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates arguments
 * @ac: arg count
 * @av: arg array
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int a, b, l1, l2, count;

	if (ac == 0 || av == NULL)
	return (NULL);

	l2 = 0;
	for (a = 0; a < ac; a++)
	{
		l1 = strlen(av[a]);
		l2 = l2 + l1;
		l2 = l2 + 1;
	}
	result = malloc(sizeof(char) * (l2 + 1));
	count = 0;
	for (a = 0; a < ac; a++)
	{
		l1 = strlen(av[a]);
		for (b = 0; b < l1; b++)
		{
			result[count] = av[a][b];
			count++;
		}
		result[count] = '\n';
		count++;
	}
	result[l2 + 1] = '\0';
	return (result);
}
