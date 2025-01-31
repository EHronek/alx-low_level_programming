#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the first element of my array
 * @size: its the number of elements in the array
 * @value: value to search for
 *
 * Return: index where the value is located, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
