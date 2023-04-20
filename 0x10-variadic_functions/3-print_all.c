#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of args passed to the fun
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int a, b, c;
	char *str;
	const char t_arg[] = "cifs";

	a = b = c =0;
	va_start(valist, format);
	while (format && format[a])
	{
		if (t_arg[b])
		{
			b++;
			if (format[a] == t_arg[b] && c)
			{
				printf(", ");
				break;
			}
		}
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				str = va_arg(valist, char *);
				a++;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
	}
	printf("\n");
	va_end(valist);
}
