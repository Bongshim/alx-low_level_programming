#include "stdio.h"

/**
  * print_to_98  - checks for the case
  * @n: first parameter
  *
  * Return: returns an int 0
  */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 97; n++)
			printf("%d, ", n);
	}
	else
		for (; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
