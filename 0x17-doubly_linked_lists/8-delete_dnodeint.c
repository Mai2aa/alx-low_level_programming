#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node in the the specified index
 * @head: pointer to pointer to head
 * @index: index of the node to be deleted
 * Return: 1 if successful -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		dlistint_t *temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	free(temp);
	return (1);
	}

	while (count < index)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
