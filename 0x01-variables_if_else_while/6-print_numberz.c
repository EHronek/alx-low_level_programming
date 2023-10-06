#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 (success)
  */
int main(void)
{
	int nums = '0';

	while (nums <= '9')
	{
		putchar(nums);
		nums++;
	}
	putchar('\n');
	return (0);
}
