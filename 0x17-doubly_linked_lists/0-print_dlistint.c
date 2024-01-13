#include "lists.h"
/**
  * print_dlistint - prints all the elements of a dlistint_t list
  * @h: is the head of the doubly linked list
  * Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
