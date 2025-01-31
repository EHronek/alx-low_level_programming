#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - print the array elements within a specific range
 * @array: Pointer to the first element of array
 * @low: Starting index of the range
 * @high: ending index of the range
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sotred array using binarysearch
 * @array: pointer to the first element of array
 * @size: Number of elements in the array
 * @value: value to search for
 * Return: index where value is found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		size_t mid;

		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if(array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid -1;
		}
	}
	return (-1);
}
