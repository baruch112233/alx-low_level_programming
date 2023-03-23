#include "main.h"
/**
 * _isupper - checks if the letter is upper
 * @x: the number to be checked
 * Return: 1 for upper case letter, 0 for anything else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
