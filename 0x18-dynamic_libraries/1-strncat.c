#include "holberton.h"
/**
 *_strncat - concatenate two strings specifying n bytes
 *
 *@dest: pointer to s1 variable
 *@src: pointer to s2 variable
 *@n: variable with the number of bytes to concatenate
 *Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int coun = 0;
	int counter = 0;

	while (dest[coun] != '\0')
	{
		coun++;
	}

	while (counter < n && src[counter] != '\0')
	{
		dest[coun] = src[counter];
		coun++;
		counter++;
	}
	return (dest);
}
