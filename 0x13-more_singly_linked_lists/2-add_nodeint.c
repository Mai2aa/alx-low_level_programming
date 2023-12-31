#include "lists.h"
/**
 * add_nodeint - adds a node at the begininng of list
 * @head: pointer to the the new node
 * @n: data to be written
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
