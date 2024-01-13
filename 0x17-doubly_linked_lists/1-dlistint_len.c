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
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
