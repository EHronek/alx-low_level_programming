#include "main.h"
/**
  * _strcmp - function that compares two strings
  * @s1: pointer argument to the first string
  * @s2: pointer argument to the second string
  * Return: 0 if equal, 1 if is greater, -1 if is less
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
