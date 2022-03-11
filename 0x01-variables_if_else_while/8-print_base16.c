#include <stdio.h>

/**
  * main - main function
  *
  * Return: returns an int 0
  */

int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		putchar(n % 10 + '0');
	}
	putchar('\n');
	return (0);

}
