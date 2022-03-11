#include <stdio.h>

/**
  * main - main function
  *
  * Return: returns an int 0
  */

int main(void)
{
	char str;

	for (str = 'z'; str >= 'a'; str--)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);

}
