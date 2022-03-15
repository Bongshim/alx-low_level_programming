#include "main.h"

/**
  * _abs - checks for the case
  * @c: first parameter
  *
  * Return: returns an int 0
  */

int _abs(int c)
{
	if (c > -1)
	{
		return (c);
	}
	else
	{
		return (0 - (c));
	}
}
