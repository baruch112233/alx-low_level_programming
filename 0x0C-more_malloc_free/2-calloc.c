#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: number of members
 * @size: size of array
 * Return: if it fails or size is 0, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	int j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	j = nmemb * size;
	p = malloc(j);

	if (p == NULL)
	{
		return (NULL);
	}

	for (; i < j; i++)
	{
		p[i] = 0;
	}
	return (p);
}
