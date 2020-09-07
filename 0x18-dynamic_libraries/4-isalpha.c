#include "holberton.h"
/**
  *_isalpha - is a letter upper or lowercase
  *
  *@c: is the variable for the main.c to check the answer
  *
  *Return: 1 if is alphabetic and 0 if is not.
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
