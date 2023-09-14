#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);
	
	char *separator = "";
	int i = 0;
	
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			char c = va_arg(args, int);
			printf("%s%c", separator, c);
		}
		else if (format[i] == 'i')
		{
			int num = va_arg(args, int);
			printf("%s%d", separator, num);
		}
		else if (format[i] == 'f')
		{
			double num = va_arg(args, double)
				printf("%s%f", separator, num);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, str);
			}
		}
		separator = ", ";
		i++;
	}
	
	va_end(args);
	
	printf("\n");
}
