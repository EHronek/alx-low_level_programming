#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 (success)
  */
int main(void)
{
	char digit = '0';
	char comma = ',';
	char space = ' ';

	while (digit <= '9')
	{
		putchar(digit);
		if (digit <= '8')
		{
		putchar(comma);
		putchar(space);
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
