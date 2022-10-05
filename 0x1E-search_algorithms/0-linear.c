#include "search_algos.h"

/**
 * linear_search - a fxn that searches for a value in an array of
 * integers using the linear search algorithm
 * @array: array to search from 
 * @size: array size
 * @value: value to look find
 *
 * Return: the index of the found value,
 * or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
