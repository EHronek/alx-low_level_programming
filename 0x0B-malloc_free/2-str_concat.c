#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concatenates two strings
  * @s1: the first string
  * @s2: the string to add to s1
  * Return: pointer to a newly alllocated space that has contents of s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int len3 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
		len2++;
	len3 = len1 + len2;
	str = malloc(sizeof(char) * len3 + 1);
	if (str == NULL)
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i <= len3)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
