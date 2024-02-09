#include "hash_tables.h"
/**
  * hash_table_delete - deletes a hash table
  * @ht: itss a pointer to a hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *t_node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			t_node = ht->array[i];
			while (t_node != NULL)
			{
				temp = t_node->next;
				free(t_node->key);
				free(t_node->value);
				free(t_node);
				t_node = temp;
			}

		}
	}
	free(head->array);
	free(head);
}
