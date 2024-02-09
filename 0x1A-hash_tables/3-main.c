#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
  * main - check the code
  * Return: ALways EXIT_SUCCESS
  */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	return (EXIT_SUCCESS);
}
