#include "main.h"
/**
  * rot13 - encodes a string using ROT13
  * @s: the string to encode
  * Return: a pointer to the encoding string
  */
char *rot13(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			{
				s[i] = s[i] + 13;
			}
			else
			{
				s[i] = s[i] - 13;
			}
	}
	}
	return (s);
}
