#include <stdio.h>
#include "main.h"
/**
  * main - checks the code
  *
  * Return: Always 0
  */
int main(void)
{
	int a;
	int b;

	a = 10;
	b = 20;
	printf("a = %d\n, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d\n, b = %d\n", a, b);
	return (0);
}
