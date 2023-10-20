#include "main.h"
/**
  * cap_string - capitalizes all words of a string.
  * @a: pointer argument
  * Return: pointer
  */
char *cap_string(char *a)
{
	int i = 0;
	int word_new = 1;

	while (a[i])
	{
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
	{
		if (word_new && (a[i] >= 'a' && a[i] <= 'z'))
		{
			a[i] = a[i] - ('a' - 'A');
			word_new = 0;
		}
		else if (!word_new && (a[i] >= 'A' && a[i] <= 'Z'))
		{
			a[i] = a[i] + ('a' - 'A');
			word_new = 0;
		}
		else
		{
			word_new = 1;
		}
	}
		i++;
	}
	return (a);
}
