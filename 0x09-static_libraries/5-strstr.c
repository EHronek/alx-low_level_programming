#include "main.h"
#include <stddef.h>
/**
  * _strstr - locates a substring
  * @haystack: the string to search in
  * @needle: the substring to search for
  * Return: returns a pointer to the beginning of the located substringor Null
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hay = haystack;
		char *ned = needle;

		while (*hay && *ned && *hay == *ned)
		{
			hay++;
			ned++;
		}
		if (*ned == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
