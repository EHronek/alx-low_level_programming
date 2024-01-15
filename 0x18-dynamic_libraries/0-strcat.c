#include "main.h"
/**
  * _strcat - concatenates two strings
  * @dest: destination string
  * @src: source string
  * Return: pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int d_length = 0;

	while (dest[d_length] != '\0')
	{
		d_length++;
	}
	while (src[i] != '\0')
	{
		dest[d_length + i] = src[i];
		i++;
	}
	dest[d_length + i] = '\0';
	return dest;
}
