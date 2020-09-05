#include "lists.h"
/**
 * print_recursive - print recursive the doubly list
 * @element: element
 * @counter: counter
 * Return: counter, or recursion
 */
size_t print_recursive(const dlistint_t *element, size_t counter)
{
	if (element == NULL)
		return (counter);

	printf("%d\n", element->n);
	return (print_recursive(element->next, ++counter));
}

/**
 * print_dlistint - print all the elements in a doubly list
 * @h: doubly list head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	(void)*h;
	return (print_recursive(h, 0));
}
