#include "lists.h"
#include <stdio.h>
/**
 * looped_listint_len - counts the number of unique nodes
 * @head: a pointer to the first node
 * Return: the number of the unique node or 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;

		if (current->next >= current)
		{
			printf("Error: Loop detected in the linked list\n");
			exit(98);
		}

		current = current->next;
	}
	return count;
}
