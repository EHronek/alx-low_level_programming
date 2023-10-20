#include "main.h"
#include <stdio.h>
/**
  * leet - function that encodes a strig into 1337
  * @l: pointer argument
  * Return: void
  */
char *leet(char *l)
{
	int i = 0;

	while (l[i])
	{
		switch (l[i])
		{
			case 'a':
			case 'A':
				l[i] = '4';
				break;
			case 'e':
			case 'E':
				l[i] = '3';
				break;
			case 'o':
			case 'O':
				l[i] = '0';
				break;
			case 't':
			case 'T':
				l[i] = '7';
				break;
			case 'l':
			case 'L':
				l[i] = '1';
				break;
		}
		i++;
	}
	return (l);
}
