#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - excutes a function given as parameter
 * @size: size of the array
 * @array: array to iterate over
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array && action)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		return;
	}
}
