#include "lists.h"
/**
 * sum_listint - get the sum of all list data
 * @head: first node of the element
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
