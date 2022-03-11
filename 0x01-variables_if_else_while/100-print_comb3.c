#include <stdio.h>

/**
  * main - main function
  *
  * Return: returns an int 0
  */

int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		putchar(n % 10 + '0');
		for (m = 0; m <= 9; m++)
		{
			putchar(m % 10 + '0');
			if (n < 9)
			{
				putchar(44);
				putchar(32);
			}
		}
		}
	}
	putchar('\n');
	return (0);

}
