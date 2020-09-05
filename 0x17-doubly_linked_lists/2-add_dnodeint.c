#include "lists.h"
/**
 * add_dnodeint - add node at the beginning
 * @element: head doubly linked list
 * @n: new_node's data
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **element, const int n)
{
	if (*element == NULL || (*element)->prev == NULL)
	{
		dlistint_t *new_node = NULL;

		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *element;
		if (*element)
		{
			new_node->prev = (*element)->prev;
			(*element)->prev = new_node;
		}
		else
		{
			new_node->prev = NULL;
		}
		(*element) = new_node;
		return (new_node);
	}
	else
	{
		return (add_dnodeint(&(*element)->prev, n));
	}
}
