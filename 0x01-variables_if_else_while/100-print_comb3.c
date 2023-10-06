#include <stdio.h>
/**
  * main - Entry point for code
  * Return: 0 (success)
  */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (b > a)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return (0);
}
