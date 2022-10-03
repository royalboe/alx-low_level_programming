#include "search_algos.h"

/**
 * binary_search : fxn that searches for a value in an array using binary search
 * @array : array to search from
 * @size : array size
 * @value : the value to look for
 *
 * return : returns the index of the value when found or 
 * -1 if array is empty or value not present in array
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_helper(array, value, 0, size -1));
}

/**
 * binry_helper : uses recursion to search for value in an array
 * @array : array to search from
 * @value : value to search for
 * @lo: index of the low bound
 * @hi: index for high bound
 *
 * return : index of the value or -1 if not found
 */

int binary_helper(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;
	print_array(array, lo, hi);
	if (hi == lo && array[lo] !=value)
		return (-1);

	mid = ((hi + lo) / 2);
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (binary_helper(array, value, mid + 1, hi));
	if (array[mid] > value)
		return (binary_helper(array, value, lo, mid -1));
	return (-1);
}

/**
 * print_array : prints the array
 * @array : array to be printed
 * @lo : index of the low bound
 * @hi : index of the high bound
 *
 * reurn : void
 */

void print_array(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i < hi)
			printf(", ");
	}
	printf("\n");
}
