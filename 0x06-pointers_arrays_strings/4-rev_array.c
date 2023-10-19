#include "main.h"
/**
  * reverse_array - reverses the contents of an array of integers
  * @a: pointer argument
  * @n: number of elements of an array
  * Return: reverse of the elements
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
