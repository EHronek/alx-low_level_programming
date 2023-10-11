#include "main.h"
/**
  * print_alphabet_x10 - to print 10 times the alphabet in lowercase
  * Return: void
  */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	for (j = 0; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
