#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fn that returns sum of all its parameters
 * @n: number of parameters
 * @...: parameters to calculate the sum
 * Return: 0 if n == 0, else sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (unsigned int a = 0; a < n; a++)
	{
		sum += va_arg(args, n);
	}
	if (n == 0)
	{
		return (0);
	}
	va_end(args);
	return (sum);
}
