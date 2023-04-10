#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	int i, x;
	char *s;
	i = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	if (str[i])
	{
		i++;
	}

	s= malloc((sizeof(char) * i) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < i; x++)
	{
		s[x] = str[x];
	}

	s[x] = '\0';
	return (s);
}
