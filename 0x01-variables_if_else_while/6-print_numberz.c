#include <stdio.h>
/**
 * main - program that prints single numbers of base 10 starting from 0
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
