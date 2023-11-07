#include <stdio.h>
/**
 * main - to print the name of the file it was compiled from
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __THE_FILE__);
	return (0);
}
