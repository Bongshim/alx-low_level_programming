#include "main.h"

/**
  * print_alphabet - main function
  *
  * Return: returns an int 0
  */

void print_alphabet(void)
{
	int alph;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
