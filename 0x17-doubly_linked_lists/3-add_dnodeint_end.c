#include "lists.h"
/**
  * add_dnodeint_end - it adds a new node at the end of a dlistint_t list
  * @head: pointer to the pointer of the beginning of a list
  * @n: the data for the new list at the end
  * Return: address of new element otherwise NULL
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = 0;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	new_node->prev = end;
	return (new_node);
}
