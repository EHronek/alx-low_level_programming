#include "main.h"
/**
  * print_triangle - prints a triangle
  * @size: argument to pass
  *
  * Return: void
  */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1) - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
