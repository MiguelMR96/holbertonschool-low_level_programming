#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of doubly linked list
 * @head: pointer to head
 * @n: new node's data
 * Return: void
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		new_node->prev = *head;
		*head = new_node;
	}
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		new_node->prev = aux;
		aux->next = new_node;
	}
	return (new_node);
}
