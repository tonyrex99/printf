#include "main.h"
#include <stdlib.h>

/**
 * _itoa - converts an int to a string
 * @a: number to be converted
 *
 * Return: pointer to string that can be freed using malloc
*/
char *_itoa(int a)
{
	char *string, *p;
	int rem, quo, size_of_string;

	rem = 0;
	quo = _abs(a);
	size_of_string = number_of_digits((unsigned int) a);

	if (a < 0)
		size_of_string++;

	string = malloc(sizeof(char) * (size_of_string + 1));

	if (!string)
		exit(1);

	if (a == 0)
	{
		string[0] = '0';
		string[1] = '\0';
		return (string);
	}
	p = string;
	while ((quo / 10 != 0) || (quo % 10 != 0))
	{
		rem = quo % 10;
		*p = rem + '0';
		quo /= 10;
		p++;
	}
	if (a < 0)
	{
		*p = '-';
		p++;
	}
	reverse_string(string);
	*p = '\0';

	return (string);
}

/**
 * number_of_digits - returns number of digits for an int
 * @d: number
 *
 * Return: number of digits
*/
int number_of_digits(unsigned int d)
{
	int count = 0;

	if (d == 0)
		return (1);

	while (d / 10 != 0)
	{
		count++;
		d /= 10;
	}

	return (d + 1);
}
