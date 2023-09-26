#include "lists.h"
/**
 * free_listint - frees the list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	
	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
