#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @c: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int c)
{
	void *ptr;

	ptr = malloc(c);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
