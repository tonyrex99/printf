#include "main.h"

/**
 * _puts - prints a string
 * @s: string pointer
 *
 * Return: number of characters printed
*/
int _puts(char *s)
{
	int i = 0;

	while (*s)
	{
		_putchar(*s);
		i++;
		s++;
	}

	return (i);
}
