#include "holberton.h"
/**
  *_isupper - check if is uppercase
  *
  *@c: character being checked
  *Return: 1 if is upper and 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

