#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - it initializes a variable of type struct dog
  * @d: structure to be initialized
  * @name: name of the dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: the owner of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
