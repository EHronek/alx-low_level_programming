#include "main.h"
/**
  * set_bit - it sets value of a bit to 1 at a given index
  * @n: it is pointer fir number
  * @index: index to change bit to 1
  * Return: -1 if it didnt work and 1 on success
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;
	unsigned int msk = 1;

	b = sizeof(n) * 8 - 1;
	if(index > b)
		return (-1);
	msk = msk << index;
	*n |= msk;
	return (1);
}
