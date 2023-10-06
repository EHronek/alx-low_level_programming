#include <stdio.h>
/**
  * main - ENtry point of my program
  * Return: 0 (success);
  */
int main(void)
{
	int count = '0';

	while (count <= '9')
	{
		putchar(count);
		count++;
	}
	putchar('\n');
	return (0);
}
