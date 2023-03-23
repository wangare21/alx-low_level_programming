#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searchers for an integr
 * @array: array to search in 
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0, for -1 if not match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
