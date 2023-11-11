#include "lists.h"
/**
 * sum_dlistint - sum of the list
 * @head: pointer
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
