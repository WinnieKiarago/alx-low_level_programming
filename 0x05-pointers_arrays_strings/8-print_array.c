#include "main.h"

/**
 * print_array - fn that prints n elements of int array,followed by new line
 * @a: array of integers
 * @n: number of elements
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
