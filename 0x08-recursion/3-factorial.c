#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: an int
 * Return: -1 if n is less than 0, factorial if its 0 and above
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
