/**
 * get_specifier - takes in a string pointer beginning with the % symbol
 * and returns the following specifier e.g "%s fhsoiejiw" returns s;
 * @s: string pointer beginning with %
 *
 * Return: string specifier or null byte if starting string is not %
*/
char get_specifier(char *s)
{
	if (*s != '%')
		return ('\0');

	s++;
	return (*s);
}
