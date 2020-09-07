#include "holberton.h"
/**
  *_abs - absolute value of integer
  *@n : integer value
  *Return: int
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
