#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to doubly linked list's head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
