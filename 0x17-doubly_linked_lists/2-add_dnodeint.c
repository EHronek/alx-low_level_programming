#include "lists.h"
/**
  * add_dnodeint - function adds a  new node at the beginning of a dlistint_t
  * @head: pointer to pointer to a beginning of the list
  * @n: the data for the new node
  * Return: address of new element otherwise NULL
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = 0;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
