#include "main.h"

/**
 * _strlen  - calculates the length of a string
 * @s: pointer to a string
 *
 * Return: length of the string
 */

int  _strlen(char *s)
{
	int length_of_string;

	length_of_string = 0;

	while (*(s + length_of_string) != '\0')
	{
		length_of_string++;
	}


	return (length_of_string);
}
