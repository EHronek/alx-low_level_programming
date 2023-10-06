#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 (success)
  */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			lowercase++;
				continue;
		}
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
