#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase and uppercase.
*
* Return: Always return 0 (Success)
*/
int main (void)
{
        char c;

	char d;

        c = 'a';
	d = 'A';
        while
                (c <= 'z')
                {
                        putchar (c);
                        c++;
		}
	while
		(d <= 'Z')
		{
			putchar (d);
			d++;
		}
	putchar('\n');
        return (0);
}
