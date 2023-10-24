#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of two diagonals
  * @a: the name of the array
  * @size: the size of the array
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int pri_sum = 0;
	int sec_sum = 0;

	while (i <= (size * size))
	{
		pri_sum = pri_sum + a[i];
		i = i + size + 1;
	}
	while (j < (size * size - 1))
	{
		sec_sum += a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", pri_sum, sec_sum);
}
