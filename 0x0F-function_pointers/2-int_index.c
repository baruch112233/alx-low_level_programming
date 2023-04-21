#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of an array
 * @cmp: pointer to the comparing fun
 * Return: index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);

}
