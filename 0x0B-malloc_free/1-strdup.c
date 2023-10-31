#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns pointer to a newly allocated space in memory
  * @str: string to be copied
  * Return: pointer to the duplicated string and Null if insufficient memory
  */
char *_strdup(char *str)
{
	char *array;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	array = malloc(sizeof(char) * (i + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		array[j] = str[j];
		j++;
	}
	array[j + 1] = 0;
	return (array);
}
