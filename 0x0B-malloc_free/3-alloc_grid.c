#include <stdlib.h>
/**
 * alloc_grid - creates 2D array
 * @width: width of array
 * @height: height of array
 * Return: NULL or pointer as the case maybe
 */
int **alloc_grid(int width, int height)
{
	int **result;
	int a, b;

	if (width <= 0 || height <= 0)
	return (NULL);

	result = (int **)malloc(sizeof(int *) * height);
	for (a = 0; a < height; a++)
	{
		result[a] = (int *)malloc(sizeof(int) * width);
		if (result[a] == NULL)
		{
			free(result);
			for (b = 0; b < a; b++)
			{
				free(result[b]);
			}
			return (NULL);
		}
	}

	if (result == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			result[a][b] = 0;
		}
	}

	return (result);
}
