#include "stdio.h"

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
		if (c < 98)
		{
			printf("%d, " c);
		}
		else
			printf(98);
	}
}
