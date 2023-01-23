#include "main.h"
#include <stdlib.h>

/**
 * _strcat - concatinates src to the end of destination
 * @dest: destination string
 * @src: source string which would be at the end of destination
 *
 * Return: pointer to char dest
*/
char *_strcat(char *dest, char *src)
{
	int len_dest, i;

	len_dest = _strlen(dest);

	i = len_dest;

	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
