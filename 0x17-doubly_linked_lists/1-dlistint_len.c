#include "lists.h"
/**
  * dlistint_len - counts the number of eleements in a doubly linked list
  * @h: the head of the dlistint_t list
  * 
  * Return: the number of elements in the dlistint_t list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
