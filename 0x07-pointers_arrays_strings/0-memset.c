#include "main.h"
/**
  * _memset - fills the first n bytes of the memory area pointed to by s
  * @s: pointer to the memory area
  * @b: the constant byte to fill with
  * @n: the number of bytes to fill
  * Return: a pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
