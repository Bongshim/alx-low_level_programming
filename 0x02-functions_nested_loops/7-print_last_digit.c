#include "main.h"

/**
  * print_last_digit - checks for the case
  * @c: first parameter
  *
  * Return: returns an int 0
  */

int print_last_digit(int c)
{
	int r;

	if (c < 0)
	{
		r = -1 * (c % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = c % 10;
		_putchar(r + '0');
		return (r);

	}
}
