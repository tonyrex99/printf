#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - Prints a character to stdout
 * @character: Character to print
 *
 * Return: void
*/

void _putchar(char character)
{
	write(1, (void *) &character, 1);
}
