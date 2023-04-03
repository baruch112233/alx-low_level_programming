#include "main.h"
/**
 * _memset - replaces memory with constant byte
 * @s: the array to be modified
 * @b: a constant
 * @n: unsigned integer
 * Return: modified array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
