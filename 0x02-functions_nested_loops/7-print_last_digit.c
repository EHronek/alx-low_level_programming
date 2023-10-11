#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n: - integer parameter
  * Return: -always 0
  */
int print_last_digit(int n)
{
	int lst_dgt;

	lst_dgt = n % 10;
	if (lst_dgt < 0)
	{
		lst_dgt *= -1;
	}
	_putchar(lst_dgt + '0');
	return lst_dgt;
}
