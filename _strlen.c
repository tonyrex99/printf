/**
 * _strlen - returns the length of a string
 * @s: string to get length of
 *
 * Return: lenght of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
