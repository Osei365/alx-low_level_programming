/**
 * int_index - returns index based on condition
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 * Return: returns an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, el;

	if (size <= 0 || !cmp)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		el = array[a];
		if (cmp(el) > 0)
		return (a);
	}
	return (-1);
}
