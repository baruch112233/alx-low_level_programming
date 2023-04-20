#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums up all its parameters
 * @n: number of parameters
 * @...: variable number of parameters
 * Return: 0 if n is 0, sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	sum = i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
