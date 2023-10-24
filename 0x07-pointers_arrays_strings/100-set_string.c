#include "main.h"
/**
  * set_string - sets value of a pointer to char
  * @s: pointer to be change
  * @to: value to change the pointer to
  * Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}
