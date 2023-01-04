#include "abiy.h"

/**
 * _sqrt_recursion - return the square of a number
 * @n: interger ...
 * Return: integer ...
 **/

int _sqrt_recursion(int n)
{
	long i = n;

	if (i < 0)
		return (-1);
	else if (i == 0)
		return (1);
	else
		return (i * _sqrt_recursion(i - 1));
}
