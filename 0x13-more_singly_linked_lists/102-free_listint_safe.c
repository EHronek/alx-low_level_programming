#include "lists.h"
/**
  * free_listint_safe - it frees a listint_t linked list safely
  * @h: it is a pointer to a pointer to hte head of the linked list
  *
  * Return: the size of the list that was freed
  */
  
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return 0;
	current = *h;

	while (current != NULL)
	{
		next = current->next;
		node_count++;
		if ((void *)next < (void *)current)
		{
			current->next = NULL;
			break;
		}
		free(current);
		current = next;
	}
	*h = NULL;
	return node_count;
}
