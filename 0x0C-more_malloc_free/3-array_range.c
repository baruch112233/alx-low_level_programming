#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of int
 * @min: int
 * @max: int
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
	{
		return (NULL);
	}

	for (; min <= max; min++)
	{
		a[i] = min;
		i++;
	}
	return (a);
}
