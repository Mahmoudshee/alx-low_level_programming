#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: number of elements in array.
 * @cmp: pointer to function used to compare values.
 *
 * Return: index of first element.
 * -1 if no element isfound or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
