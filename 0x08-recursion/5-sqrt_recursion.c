#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: if n doesn't have a natural number, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}
