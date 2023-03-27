/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int val = 0;
	int sign = 1;

	while (!(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		val = (val * 10) + (*s - '0');
		s++;
	}
	val = val * sign;
	return (val);
}
