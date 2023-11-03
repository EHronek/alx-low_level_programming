#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - concatenates the first n bytes of @s2 into @s1
  * @s1: the 1st strng
  * @s2: second string
  * @n: the number of bytes to include of @s2
  * Return: newy allocated space in memory
  * Return null if it fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int concat_len;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1])
	{
		len_s1++;
	}
	while (s2[len_s2])
	{
		len_s2++;
	}
	if (len_s2 > n)
	{
		len_s2 = n;
	}
	concat_len = len_s1 + len_s2;
	concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		concat[k++] = s1[i];
	}
	for (j = 0; j < len_s2; j++)
	{
		concat[k++] = s2[j];
	}
	concat[k] = '\0';
	return (concat);
}
