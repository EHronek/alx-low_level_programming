#include "lists.h"
/**
  * free_dlistint - it frees a dlistint_t list
  * @head: the pointer to the start of a node
  * Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
