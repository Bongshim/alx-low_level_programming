#include "main.h"

/**
  * main - main function
  *
  * Return: returns an int 0
  */

int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
