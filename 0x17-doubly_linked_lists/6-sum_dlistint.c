#include "lists.h"
/**
 * sum_dlisint - sum all the nodes of a doubly linked list
 * @head: pointer to linked list's head
 * Return: the summation of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
