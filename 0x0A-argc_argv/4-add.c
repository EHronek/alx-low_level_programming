#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *
 * @argc: argument counter argc
 * @argv: argument vector
 *
 * Return: 1 if ERROR such as symbols that are not numbers,
 * 0 if nothing is passed into it
 */

int main(int argc, char *argv[])
{
	int a, b;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

