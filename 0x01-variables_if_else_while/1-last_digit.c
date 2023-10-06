#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point for my code
  * Return: always 0 (success)
  */
int main(void)
{
	int n;

	int lastdg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	lastdg = n % 10;
	if (lastdg > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdg);
	}
	else if (lastdg == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdg);
	}
	else
		printf("Last digit of %d  is %d and is less than 6 and not 0\n", n, lastdg);
	return (0);
}
