#include "search_algos.h"

/**
 * interpolation_search - iit searches for the  value in a sorted array using interpolation search.
 * @array: pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: The first index where the value is located, else -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position;
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
	return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		position = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (position >= size)
		{
			printf("Value checked array[%lu] is out of range\n", position);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", position, array[position]);

		if (array[position] == value)
			return (position);
		else if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
	}

	return (-1);
}
