#include "lists.h"
#include <stdio.h>
/**
  * print_listint_safe - it prints a listint_t linked list safely
  * @head: pointer to the head of the list
  *
  * Return: number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		return (0);

	slow = head;
	fast = head->next;
	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		node_count++;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("Loop detected, printing loop nodes:\n");

			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				node_count++;
				fast = fast->next;
				printf("[%p] %d\n", (void *)fast, fast->n);
				node_count++;
				break;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			node_count++;
			return (node_count);
		}
	}
	slow = head;
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		node_count++;
	}
	return (node_count);
}
