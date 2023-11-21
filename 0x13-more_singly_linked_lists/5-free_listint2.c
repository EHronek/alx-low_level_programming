#include "lists.h"
/**
  * free_listint2 - it frees a list and sets head to null
  * @head: its a double pointer to the head in the list
  * Return: noothing
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
