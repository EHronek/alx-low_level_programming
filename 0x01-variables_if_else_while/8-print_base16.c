#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 (success)
  */
int main(void)
{
	char hexnumber = '0';
	char hexletter = 'a';

	while (hexnumber <= '9')
	{
		putchar(hexnumber);
		hexnumber++;
	}
	while (hexletter <= 'f')
	{
		putchar(hexletter);
		hexletter++;
	}
	putchar('\n');
	return (0);
}
