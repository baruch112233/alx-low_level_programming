#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes to be concatenated
 * Return: NULL if it fails,else final string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	unsigned int d;
	char *str;
	a = b = c = d = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[a])
	{
		a++;
	}

	while (s2[c])
	{
		c++;
	}

	if (n >= c)
	{
		d = a + c;
	}
	else
	{
		d = a + n;
	}

	str = malloc(sizeof(char) * a + 1);
	if (str == NULL)
	{
		return(NULL);
	}

	c = 0;
	while (b <= a)
	{
		if (b <= a)
		{
			str[b] = s1[b];
		}

		if (b >= a)
		{
			str[b] = s2[c];
			c++;
		}
		b++;
	}
	str[b] = '\0';
	return (str);
}
