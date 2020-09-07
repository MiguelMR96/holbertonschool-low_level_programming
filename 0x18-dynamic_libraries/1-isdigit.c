#include "holberton.h"
/**
  *_isdigit - check if is a digit or otherwise
  *
  *@c: variable checked
  *Return: 1 is if digit, 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
