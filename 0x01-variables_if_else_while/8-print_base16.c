#include <stdio.h>

/**
  * main - main function
  *
  * Return: returns an int 0
  */

int main(void)
{
	int n;
	char s;

	for (n = 0; n <= 9; n++)
	{
		putchar(n % 10 + '0');
	}
	for (s = 'a'; s <= 'f'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);

}
