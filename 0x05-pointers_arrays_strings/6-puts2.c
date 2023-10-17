#include "main.h"
/**
  * puts2 - prints every other charcter of a string
  * @str: pointer argument
  * Return: void
  */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i <= length - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
