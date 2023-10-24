#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a list int list
 * @head: a double pointer of lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		free(*head);
	*head = next;
	}
}
