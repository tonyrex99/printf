#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Prints formatted strings
 * @format: Formatted string
 *
 * Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
	int numChars = 0;
	char *pointer, *output, specifier;
	va_list argsList;

	pointer = (char *) format;

	va_start(argsList, format);

	while (*pointer)
	{
		if (*pointer == '%')
		{
			specifier = get_specifier(pointer);

			output = handle_specifier(specifier, argsList);

			if (output)
			{
				numChars += _puts(output);
				free(output);
			}

			pointer += 2;
		}
		else
		{
			_putchar(*pointer);
			numChars++;
			pointer++;
		}
	}

	return (numChars);
}
