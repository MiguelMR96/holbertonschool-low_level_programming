#include "lists.h"
/**
 * recursion_count - counter in recursion
 * @h: head
 * @counter: counter
 * Return: counter
 */
size_t recursion_count(const dlistint_t *h, size_t counter)
{
	if (h == NULL)
		return (counter);
	else
	{
		return (recursion_count(h->next, ++counter));
	}
}
/**
 * dlistint_t - return number of elements in a linked list
 * @h: head to doubly linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	return (recursion_count(h, 0));
}
