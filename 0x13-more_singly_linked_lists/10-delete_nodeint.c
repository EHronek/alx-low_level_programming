#include "lists.h"
/**
  * delete_nodeint_at_index - it deletes the node at the @index of alist
  * @head: the double pointer to the head of the list
  * @index: the particular node to delete from list
  * Return: 1 (success), -1 (failure)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *next;
	listint_t *temp;

	temp = *head;

	if (*head)
		return(-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp && count < index - 1)
	{
		temp = temp->next;
		count++;
		if (temp->next == NULL || temp == NULL)
			return (-1);
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
