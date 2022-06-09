#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of node
 * Return: free'd list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node = NULL;

	while (head != NULL)
	{
		tmp_node = head->next;
		free(head);
		head = tmp_node;
	}
}
