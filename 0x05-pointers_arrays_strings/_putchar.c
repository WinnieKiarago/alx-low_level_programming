#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the output
 * @c : character to be printed
 *
 * Return: 1(success)
 * on error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
