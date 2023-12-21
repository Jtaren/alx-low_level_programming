#include <stdlib.h>
#include "hash_tables.h"

typedef struct hash_table_s {
   unsigned long int size;
   void **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned
 
long
 
int size)
 
{
   hash_table_t *ht = malloc(sizeof(hash_table_t));
   if (ht == NULL) {
       return
 
NULL; // Memory allocation failed
   }

   ht->array = calloc(size, sizeof(void *));
   if (ht->array == NULL) {
       free(ht); // Free the allocated hash table structure
       return NULL; // Memory allocation failed
   }

   ht->size = size;
   return ht;
}
