#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to be modified
 * @b: a constant that modifies s
 * @n: unsigned int
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return(s);
}
