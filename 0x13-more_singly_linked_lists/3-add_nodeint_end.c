#include "lists.h"
/**
  * add_nodeint_end - it adds a node to the end of the list
  * @head: it marks the beginning of the list
  * @n: is the data toadd
  * Return: the address of the new element and NULL if Failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == 0)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
