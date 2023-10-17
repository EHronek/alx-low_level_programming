#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: poimter argument
  * Return: void
  */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = (length - 1) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
