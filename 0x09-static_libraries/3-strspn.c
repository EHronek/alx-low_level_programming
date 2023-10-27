#include "main.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: initial pointer segment
  * @accept: pointer to segment with same bytes
  * Return: number of bytes initial segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;
	char *ac = accept;

	while (*s && found)
	{
		found = 0;

		for (ac = accept; *ac; ac++)
		{
			if (*s == *ac)
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			count++;
			s++;
		}
	}
	return (count);
}
