#include "hash_tables.h"
/**
  * hash_table_set - add or update an element in a hash table
  * @ht: a pointer to the hash table
  * @key: its the key to add and cannot br an empty string
  * @value: the value associated with the key
  *
  * Return: on failure return 0 otherwise 1
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || value == NULL || key == NULL || *key == '\0')
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		return (0);
	}
	new_item->value = value_copy;
	new_item->next = ht->array[index];
	ht->array[index] = new_item;
	return (1);
}
