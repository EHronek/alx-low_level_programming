#include "lists.h"
/**
  * free_listint - it should free a list
  * @head: it is the head of list
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
