#include "main.h"
/**
  * _strncpy - copies a string
  * @dest: destination pointer argument
  * @src: src pointer argument
  * @n: - number of bytes
  * Return: a pointer to destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
