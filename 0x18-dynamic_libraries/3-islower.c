#include "holberton.h"
/**
  *_islower - check if a character is lowercase
  *@c: int number from main.c
  *Return: 1 if is lowercase and 0 if is not
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

