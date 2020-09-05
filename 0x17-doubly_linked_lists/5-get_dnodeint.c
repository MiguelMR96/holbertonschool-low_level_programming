#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head to doubly linked list
 * @index: node to get starting from 0
 * Return: The index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (aux && counter < index)
	{
		aux = aux->next;
		counter++;
	}

	return (aux);
}
