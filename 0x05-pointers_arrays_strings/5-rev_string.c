#include "main.h"
/**
  * rev_string - reverses a string
  *
  * @s: pointer argument
  * Return: void
  */
void rev_string(char *s)
{
	char *end = s;
	char *start = s;

	while (*end)
	{
		end++;
	}
	end--;
	while (end > start)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		end--;
		start++;
	}
}
