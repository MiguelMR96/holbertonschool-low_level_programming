#include "holberton.h"

/**
 * _strlen - a function to return the length of a string
 *
 * @s: a char pointer passed from main
 *
 * Return: returns an int
 */

int strglen(char *s)
{
	int lenght;

	for (lenght = 0; s[lenght]; lenght++)
		continue;

	return (lenght);
}

/**
 * _strcmp - a function to compare two strings and return
 * the ascii value difference between the first non-same
 * chars.
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 is for same strings, else the int difference in
 * no same letters.
 */

int _strcmp(char *s1, char *s2)
{
	int counter = 0;
	int sum = 0;
	int lenght_1 = strglen(s1);
	int lenght_2 = strglen(s2);
	int larger;

	if (lenght_1 > lenght_2)
		larger = lenght_1;
	else
		larger = lenght_2;

	while (counter < larger)
	{
		if (s1[counter] == s2[counter])
			counter++;
		else
		{
			sum = s1[counter] - s2[counter];
			break;
		}
	}

	return (sum);
}
