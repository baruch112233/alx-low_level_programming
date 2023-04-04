#include "main.h"
/**
 * _strchr - locates character in a string
 * @c: character in a string
 * @s: string
 * Return: always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
	}
	return ('\0');
}
