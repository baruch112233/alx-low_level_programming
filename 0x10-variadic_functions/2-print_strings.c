#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to print between strings
 * @n: number of strings passed to function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	i = 0;
	va_start(valist, n);

	for (; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
		{
			printf("%s", str);
		}
		else if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(valist);
}
