#include "main.h"

/**
  * print_sign - checks for the case
  * @n: first parameter
  *
  * Return: returns an int 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+, ');
		return (1);
	} else if (n == 0)
	{
		_putchar('0, ');
		return (0);
	} else if (!(n > 0) && !(n == 0))
	{
		_putchar('-, ');
		return (-1);
	}
}
