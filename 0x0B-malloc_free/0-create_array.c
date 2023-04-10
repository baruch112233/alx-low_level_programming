#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars and initializes it with a specific char
 * @size: size of the array
 * @c: char to modify the array
 * Return: NULL if the size is 0, array if success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	i = 0;
	char *s;
	s = malloc(size * sizeof(char));

	if (s == 0)
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
