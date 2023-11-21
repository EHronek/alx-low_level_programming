#include "lists.h"
/**
 * pop_listint - it should delete the head node of a list and returns its data
 * @head: it is the head node of the list
 * Return: it is the data of head node, or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int s;

	if (*head == NULL)
		return (0);

	temp = *head;
	s = temp->n;
	*head = temp->next;

	free(temp);
	return (s);
}
