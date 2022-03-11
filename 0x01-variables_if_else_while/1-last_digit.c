#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - main function
  *
  * Return: returns an int 0
  */
int main(void)
{
	int n;
	int dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dig = n % 10;

	if (dig > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, dig);
	}
	else if (dig == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, dig);
	}
	else
	{
		printf("Last digit of %i is %i and is less that 6 and not 0\n", n, dig);
	}

	return (0);
}
