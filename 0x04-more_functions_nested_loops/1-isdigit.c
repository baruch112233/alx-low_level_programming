#include "main.h"
/**
 * _isdigit - Check if a charachter is a digit 
 * @x: the number to be checked
 * Return: 1 if the character is a diget, 0 if anything else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
