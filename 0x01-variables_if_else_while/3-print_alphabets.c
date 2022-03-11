#include <stdio.h>

/**
  * main - main function
  *
  * Return: returns an int 0
  */

int main(void)
{
	char str;
	char str2;

	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	for (str2 = 'A'; str2 <= 'Z'; str2++)
	{
		putchar(str2);
	}
	putchar('\n');
	return (0);

}
