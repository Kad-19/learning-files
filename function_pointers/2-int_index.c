#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: the size of the array
 * @cmp: a pointer to the function executed
 * Return: the index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	if (i == size)
		return (-1);
	return (-1);
}
