#include "main.h"
/**
  * clear_bit - it should set the value of a bit to 0 at a specified index
  * @n: it is a pointer to a number
  * @index: place to change bit to 0
  * Return: -1 (error), 1 (success)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;
	unsigned int msk = 1;

	b = sizeof(n) * 8 - 1;
	if (index > b)
		return (-1);
	*n &= ~(msk << index);
	return (1);
}
