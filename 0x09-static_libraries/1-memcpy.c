#include "main.h"
/**
  * _memcpy - copies n bytes from memory area src to memory area dest
  * @dest: the pointer to destination
  * @src: the pointer to the source
  * @n: n bytes to be copied
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned char *destination = (unsigned char *) dest;
	const unsigned char *source = (const unsigned char *)src;

	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}
	return (dest);
}
