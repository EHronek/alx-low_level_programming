#include "main.h"
#include <stdlib.h>
/**
  * _realloc - reallocate memory block using malloc and free
  * @ptr: pointer to the memorypreviously alllocated by malloc call
  * @old_size: sizein bytes of the allocated space for @ptr
  * @new_size: new size in bytes for the new memory block
  * Return: @ptr if @new_size == @old_size and ptr != null
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_ar;
	char *ptr_old = ptr;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr_ar = malloc(new_size);
		return (ptr_ar);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr_ar = malloc(new_size);
	if (ptr_ar == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		ptr_ar[i] = ptr_old[i];
	free(ptr_old);
	return (ptr_ar);
}
