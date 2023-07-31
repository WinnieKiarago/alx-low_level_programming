#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n:  number of integers passed to the function
 * @...: number variables to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
	{
		int number = va_arg(args, int);

		printf("%d", number);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
