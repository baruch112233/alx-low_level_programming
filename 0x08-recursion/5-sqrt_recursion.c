#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: if n doesn't have a natural number, return -1.
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
