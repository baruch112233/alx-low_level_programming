#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (*s + 1);
		s++;
	}
}
