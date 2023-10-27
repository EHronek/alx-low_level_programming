#include "main.h"
/**
  * _puts - prints astring plus newline
  * @str: pointer argument
  * Return: void
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
