#include "main.h"
/**
  * _strlen - returns the lenght of a string
  * @s: pinter parameter
  * Return: count
  */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
