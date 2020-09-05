#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *tmp;

	head = NULL;
	add_dnodeint(&head, 0);
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 3);
	add_dnodeint(&head, 4);
	tmp = add_dnodeint(&head, 98);
	add_dnodeint(&tmp, 402);
	add_dnodeint(&head, 1024);
	print_dlistint(head);
	return (EXIT_SUCCESS);
}
