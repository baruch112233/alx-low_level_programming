#include "main.h"
/**
 * is_prime_number - tests if a number is prime number or not
 * @n: integer
 * Return: 1 if the input is prime number, 0 if it isn't
 */
int is_prime_number(int n)
{
	int i = 1;

	if (i >= 1 && n % i == 0)
	{
		return (0);
	}
	return (1);
}
