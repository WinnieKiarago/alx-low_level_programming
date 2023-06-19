#include <stdio.h>
/**
 * main -  lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c >= 'z')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
