#include "lists.h"
/**
 * del_dnodeint - delete node
 * @head: pointer to doubly linked list
 * @node: node to delete
 * Return: 1 succeeded, -1 if failed
 */
int del_dnodeint(dlistint_t **head, dlistint_t *node)
{
	if (*head == node)
		*head = node->next;
	if (node->next)
		(node->next)->prev = node->prev;
	if (node->prev)
		(node->prev)->next = node->next;

	free(node);
	return (1);
}

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
	int res = 0;

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

	res = del_dnodeint(head, aux);
	return (res);
}
