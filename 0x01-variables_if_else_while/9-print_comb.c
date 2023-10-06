#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 (success)
  */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		if (digit <= '8')
		{
		putchar(',');
		putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
