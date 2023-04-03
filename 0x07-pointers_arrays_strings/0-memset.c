#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to be modified
 * @b: the constant that replaces the first n bytes of the pointer
 * @n: unsigned int
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
