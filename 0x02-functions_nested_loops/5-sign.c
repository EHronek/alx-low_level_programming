#include "main.h"
/**
  * print_sign - function to print the sign of a number
  * @n: integer value in question
  * Return: 1 (greater than zero) 0(is zero), -1(less zero)
  *
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
