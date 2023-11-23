#include "main.h"
/**
  * print_binary - it should print the binary representation of a number
  * @n: the number to convert
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	int a = 0;
	int b = sizeof(n) * 8 - 1;

	if (n == 0)
		_putchar('0');
	while (b >= 0)
	{
		if (n >> b & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
			_putchar('0');
		b--;
	}
}
