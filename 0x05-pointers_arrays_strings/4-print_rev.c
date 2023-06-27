#include "main.h"

/**
 * print_rev - fn that prints a string, in reverse, followed by a new line.
 *
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (a = 0; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
