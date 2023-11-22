#include "lists.h"
/**
  * sum_listint - it shouldreturn the sum of all the data of a list
  * @head: the head of the list
  * Return: sum, 0if list is empty
  */
int sum_listint(listint_t *head)
{
	int t_sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		t_sum += head->n;
		head = head->next;
	}
	return (t_sum);
}
