#include "main.h"
/**
  * _abs - computes the absolute value of an integer
  * @n: - integer in question
  * Return: 0 always
  */
int _abs(int n)
{
	if (n < 0)
	{
		int a = 0;

		a = n * -1;
		return (a);
	}
	return (n);
}
