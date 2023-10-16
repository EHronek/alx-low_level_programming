#include "main.h"
/**
  * swap_int - swaps the values of two integers
  * @a: first pointer paramater
  * @b: second pointer parameter
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
