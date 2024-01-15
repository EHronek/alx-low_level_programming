#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - locates the first occerence in the string s any byte in string accept
  * @s: pointer to the string
  * @accept: pointer to accept
  * Return: pointer to s
  */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *ac = accept;

		while (*ac)
		{
			if (*s == *ac)
			{
				return s;
			}
			ac++;
		}
		s++;
	}
	return (NULL);
}
