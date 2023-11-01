#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - function that returns a pointer to a 2 dimensional array integers
  * @width: rows of the dimensional array
  * @height:  column of the 2d array
  * Return: NULL on failure or when width and height is 0
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;
	int k;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			array[j][k] = 0;
	}
	return (array);
}
