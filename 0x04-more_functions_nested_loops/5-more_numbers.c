#include "main.h"

/**
*more_numbers - function that print numbers from from 0 to 9
*Return: returns a value
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
