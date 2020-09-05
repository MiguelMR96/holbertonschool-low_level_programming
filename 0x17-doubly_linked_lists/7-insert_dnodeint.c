#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer doubly linked list
 * @idx: index for insert node
 * @n: node->data to insert
 * Return: new node's address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new_node;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);

	aux = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (aux->next && counter < idx - 1)
	{
		if (aux->next->next == NULL)
			return (NULL);
		aux = aux->next;
		counter++;
	}
	new_node->next = aux->next;
	new_node->prev = aux;
	aux->next = new_node;
	aux->next->prev = new_node;

	return (new_node);
}
