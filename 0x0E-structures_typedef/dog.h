#ifndef _DOG_H_
#define _DOG_H_
/**
  * struct dog - a new structure call struct dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: the owner of the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  * typedef dog_type - defines a new var name for struct dog
  */
typedef struct dog dog_var;
int _putchar(char c);
#endif
