#include "main.h"
#include <stdarg.h>
#include <stdlib.h

/**
 * _printf - prints formatted strings
 * @format: formatted string
 *
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	char *p, *result, specifier;
	va_list args;

	p = (char *) format;

	va_start(args, format);

	while (*p)
	{
		if (*p == '%')
		{
			specifier = get_specifier(p);

			result = handle_specifier(specifier, args);

			if (result)
			{
				count += _puts(result);
				free(result);
			}

			p += 2;
		}
		else
		{
			_putchar(*p);
			count++;
			p++;
		}
	}

	return (count);
}
