#include "holberton.h"

/**
  *_strcat - concatenates two strings
  *
  *@dest: dest of the src string
  *@src: where the string is stored
  *Return: char *
  */
char *_strcat(char *dest, char *src)
{
	char *cut = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}
	return (cut);
}
