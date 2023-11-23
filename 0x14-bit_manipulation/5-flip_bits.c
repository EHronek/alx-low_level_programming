#include "main.h"
/**
 * flip_bits - it shouldreturn the number of bits you would need to flip
 * to get from one number to another
 * @n: it is the first number in
 * @m: it is the second number
 * Return: returns the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	int counter = 0;

	if (!n || !m)
		return (0);
	while (xor)
	{
		if (xor & 1)
			counter++;
		xor = xor >> 1;
	}
	return (counter);
}
