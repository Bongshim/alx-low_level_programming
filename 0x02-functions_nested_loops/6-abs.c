#include "main.h"

/**
  * _abs - checks for the case
  * @c: first parameter
  *
  * Return: returns an int 0
  */

int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	} else if (c < 0)
	{
		return (0 - (c));
	}
}
