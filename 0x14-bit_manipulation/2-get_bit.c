#include "main.h"
/**
  * get_bit - it should return value of a bit at a given index
  * @n: it is the number to check
  * @index: the index to check the bit
  * Return: -1 on error, value of bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int msk = 1;
	unsigned int b = sizeof(n) * 8 - 1;

	if (index > b)
		return (-1);
	msk = msk << index;
	if (n & msk)
		return (1);
	else
		return (0);
}
