#include "main.h"

/**
  * print_to_98  - checks for the case
  * @n: first parameter
  *
  * Return: returns an int 0
  */

void print_to_98(int n)
{
	int c;

	for (c = n; c <= 98; c++)
	{
		if (c > 98)
		{
			_putchar(c % 10 + '0');
			_putchar(44);
			_putchar(32);
		}
		else
			_putchar(c % 10 + '0');
	}
}
