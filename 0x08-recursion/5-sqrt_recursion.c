#include "main.h"

/**
 * _sqrt_recursion - fn returns the ntrl square root of a number
 * @n: number to check the natural root
 *
 * Return: function results
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n));
}
