#include "search_algos.h"

/**
 * jump_search - searches for a target avlue in a sorted array using jumpsearc
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for in array
 *
 * Return: index location where value is at, -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	for (i = prev; i <= (step < size ? step : size - 1); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);	
}
