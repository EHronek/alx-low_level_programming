#include "main.h"
/**
  * _atoi - converts string to integer
  * @s: pointer argument
  * Return: returns an unteger value
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13) || *s == '+' || *s == '-')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
