#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars and initializes it with a specific char
  * @size: number of array elements
  * @c: the character to initialize the array
  * Return: Null if size = 0 and address of the 1st element in array or null
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;
	
	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}
	return (string);
}
