#include <stdlib.h>
#include <unistd.h

/**
 * _putchar - prints a character to stdout
 * @c: character to print
 *
 * Return: void
*/

void _putchar(char c)
{
	write(1, (void *) &c, 1);
}
