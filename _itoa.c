#include "main.h"
#include <stdlib.h>

/**
 * _itoa - Converts an int to a string
 * @num: Number to be converted
 *
 * Return: Pointer to string that can be freed using malloc
*/
char *_itoa(int num)
{
	char *string, *pointer;
	int remainder, quotient, string_size;

	remainder = 0;
	quotient = _abs(num);
	string_size = digits_count((unsigned int) num);

	if (num < 0)
		string_size++;

	string = malloc(sizeof(char) * (string_size + 1));

	if (!string)
		exit(1);

	if (num == 0)
	{
		string[0] = '0';
		string[1] = '\0';
		return (string);
	}
	pointer = string;
	while ((quotient / 10 != 0) || (quotient % 10 != 0))
	{
		remainder = quotient % 10;
		*pointer = remainder + '0';
		quotient /= 10;
		pointer++;
	}
	if (num < 0)
	{
		*pointer = '-';
		pointer++;
	}
	reverse_string(string);
	*pointer = '\0';

	return (string);
}
