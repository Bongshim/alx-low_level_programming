#include <stdio.h>

/**
  * main - main function
  *
  * Return: returns an int 0
  */

int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		if (str != 'q' && str != 'e')
		{
			putchar(str);
		}
	}
	putchar('\n');
	return (0);

}
