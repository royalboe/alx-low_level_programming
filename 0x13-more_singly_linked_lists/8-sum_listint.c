#include "lists.h"
/**
 * sum_listint - returns the sum of data(n)
 * @head: The head node
 * Return: @cnt is the sum of n data
 */
int sum_listint(listint_t *head)
{
	unsigned int cnt = 0;

	if (!head)
		return (0);
	while (head)
	{
		cnt += head->n;
		head = head->next;
	}
	return (cnt);
}
