#include "main.h"
/**
  * print_line - draws a straight line in terminal
  * Return: void
  * @n: value to pass
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('_');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
