#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *s;

	s = "cisfun";
	printf("%s\n", hash_djb2((unsigned char *)s));
	s = "Don't forget to tweet today";
	printf("%s\n", hash_djb2((unsigned char *)s));
	s = "98";
	printf("%s\n", hash_djb2((unsigned char *)s));
	return (EXIT_SUCCESS);
}
