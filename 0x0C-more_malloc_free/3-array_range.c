#include "main.h"
#include <stdlib.h>
/**
  * array_range - creates an array of integers.
  * @min: the smalllest integer in the array
  * @max: largest integer inside of the array
  * Return: pointer to the newly created array, null if min > max
  */
int *array_range(int min, int max)
{
	int *arr_ptr;
	int i, j = 0;

	if (min > max)
		return (NULL);
	arr_ptr = malloc(sizeof(int) * (max - min + 1));
	if (arr_ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr_ptr[j++] = i;
	}
	return (arr_ptr);
}
