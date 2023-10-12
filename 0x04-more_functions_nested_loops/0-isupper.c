#include "main.h"
/**
  * _isupper - checks for uppercase characters
  * Return: 1 (uppercase) and 0  (otherwise)
  * @c: is the character in question
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
