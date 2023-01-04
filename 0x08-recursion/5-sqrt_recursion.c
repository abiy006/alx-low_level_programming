#include "abiy.h"

/**
 * _sqrt_recursion - return the square of a number
 * @n: interger ...
 * Return: integer ...
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * _sqrt_recursion(n, n - 1));
}
