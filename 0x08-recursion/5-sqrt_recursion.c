#include "main.h"
int real_sqrt_recursion(int n, int i);
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
	return (real_sqrt_recursion(n, 0));
}
