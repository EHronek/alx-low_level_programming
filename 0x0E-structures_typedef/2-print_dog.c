#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_dog - prints the struct dog
  * @d: the pointer to structure
  * Return: nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
		{
			printf("name: %s\n", d->name);
		}
		else
			printf("name: (nil)\n");
		printf("age: %.5f\n", d->age);
		if (d->owner)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
	else
		return;
}
