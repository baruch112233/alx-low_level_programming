#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: source area
 * @dest: destination area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src [i];
	}
	return (dest);
}