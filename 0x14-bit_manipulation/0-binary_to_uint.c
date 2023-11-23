#include "main.h"
/**
  * binary_to_uint - it converts a binary number to an unsigned int
  * @b: pointers to a string of 0 and 1 chars
  * Return: The converted number, or ) if there is an invalid character
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int j = 0;
	int pow = 0;

	if (b == 0)
		return (0);
	while (b[j + 1])
		j++;
	while (j >= 0)
	{
		if (b[j] == '0')
		{
			j--;
			pow++;
		}
		else if (b[j] == '1')
		{
			num += (1 << pow);
			j--;
			pow++;
		}
		else
			return (0);
	}
	return (num);
}
