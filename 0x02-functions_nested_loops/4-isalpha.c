#include "main.h"

/**
  * _isalpha - checks for the case
  * @c: first parameter
  *
  * Return: returns an int 0
  */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
