#include "main.h"
/**
  * rev_string - reverses a string
  *
  * @s: pointer argument
  * Return: void
  */
void rev_string(char *s)
{
	int end = 10;
	int start = 0;

	while (end >= start)
	{
		_putchar(s[end]);
		end--;
	}
	_putchar('\n');
}
