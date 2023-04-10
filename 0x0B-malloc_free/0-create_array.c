#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: char to modify the array
 * Return: NULL if the size is 0, array if success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	else if (i < size)
	{
		i++;
		s[i] = c;
	}
	return (s);
}
