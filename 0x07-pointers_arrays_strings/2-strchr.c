#include "main.h"
#include <stddef.h>
/**
  * _strchr - locates a character in a string
  * @s: pointer to the string
  * @c: character to locate
  * Return: pointer to the first occurence of the character
  */
char *_strchr(char *s, char c)
{
<<<<<<< HEAD
	char *string = s;

	while (*string != '\0')
	{
		if (*string == c)
		{
			return (s);
		}
		string++;
	}
	return (NULL);
=======
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
>>>>>>> origin/master
}
