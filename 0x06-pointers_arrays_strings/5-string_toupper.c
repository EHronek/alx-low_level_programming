#include "main.h"
/**
  * string_toupper - changes all lowercase letters to uppercase
  * @s: pointer argument
  * Return: void
  */
char *string_toupper(char *s)
{
	char *original = s;

	while (*s != '\0')
	{
		if (*s <= 'z' && *s >= 'a')
		{
			*s = *s - ('a' - 'A');
		}
		s++;
	}
	return (original);
}
