#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer
 * @oldsize: new size
 * @newsize: new size
 * Return: new pointer, or NULL
 */
 void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
		{
			return (NULL);
		}
		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
	{
		return (NULL);
	}

	while (i < old_size && i < new_size)
	{
		newptr[i] = ((char *) ptr)[i];
		i++;
	}
	free(ptr);
	return (newptr);
}
