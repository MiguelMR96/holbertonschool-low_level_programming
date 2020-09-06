#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to doubly linke list's head
 * @index: node's index to delete
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	aux = *head;
	while (aux && counter < index)
	{
		if (aux->next == NULL)
			return (-1);
		aux = aux->next;
		counter++;
	}

	if (*head == aux)
		*head = aux->next;
	if (aux->next)
		(aux->next)->prev = aux->prev;
	if (aux->prev)
		(aux->prev)->next = aux->next;

	free(aux);
	return (1);
}
