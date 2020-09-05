#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to doubly linked list's head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	else
	{
		dlistint_t *tmp;

		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
