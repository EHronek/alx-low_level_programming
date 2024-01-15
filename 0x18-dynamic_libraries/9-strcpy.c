#include "main.h"
/**
 * *_strcpy - copies string
 * @dest: buffer pointer argument
 * @src: pinter argument
 *Return: returns a chatacter
 */
char *_strcpy(char *dest, char *src)
{
	char *origin_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origin_dest);
}
