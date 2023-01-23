#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * handle_specifier - Handles specifiers for formatting
 * @specifier: The specifier to be handled
 * @args: va_list of the arguments
 *
 * Return: char pointer or NULL if no matching specifier
*/
char *handle_specifier(char specifier, va_list args)
{
	int number;
	char *string, *tempString;

	switch (specifier)
	{
		case 'c':
			number = va_arg(args, int);
			string = (char *)malloc(sizeof(char) * 2);
			if (string == NULL)
			{
				exit(1);
			}
			string[0] = number;
			string[1] = '\0';
			return string;

		case '%':
			string = (char *)malloc(sizeof(char) * 2);
			if (string == NULL)
			{
				exit(1);
			}
			string[0] = '%';
			string[1] = '\0';
			return string;

		case 's':
			tempString = va_arg(args, char *);
			string = (char *)malloc(sizeof(char) * (_strlen(tempString) + 1));
			if (string == NULL)
			{
				exit(1);
			}
			*string = '\0';
			_strcat(string, tempString);
			return string;

		case 'd':
		case 'i':
			number = va_arg(args, int);
			string = _itoa(number);
			return string;

		default:
			return NULL;
	}
}
