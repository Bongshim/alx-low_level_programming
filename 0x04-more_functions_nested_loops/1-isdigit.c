#include "main.h"

/**
*_isdigit - checks for a digit
*@c: int type number
*Return: 1 if uppercase, else 0
*/

int _isdigit(int c)
{
	if (c > -1 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
