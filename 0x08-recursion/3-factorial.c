#include "main.h"
/**
 * factorial - returns factorial
 * @n: number for factorial
 *
 * Return: n factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
