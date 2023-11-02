#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc
  * @b: number to allocate memory
  * Return: pointer to the allocation memory
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(15);
	return (p);
}
