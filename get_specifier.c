/**
 * get_specifier - takes in a string pointer that starts with the % symbol
 * and returns the associated specifier
 * @s: string pointer beginning with %
 *
 * Return: return approriate specifier or NULL f not found
*/
char get_specifier(char *s)
{
	if (*s != '%')
		return ('\0');

	s++;
	return (*s);
}
