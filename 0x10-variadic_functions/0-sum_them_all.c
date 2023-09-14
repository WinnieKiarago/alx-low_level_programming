#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all the parameters
 * @n: input
 * @...: variadic function param
 * Return:0, if n == 0 else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	sum = 0;
	sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
