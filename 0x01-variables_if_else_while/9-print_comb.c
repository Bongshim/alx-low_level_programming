#include <stdio.h>

/**
  * main - main function
  *
  * Return: returns an int 0
  */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n % 10 + '0');
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);

}
