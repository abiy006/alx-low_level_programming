#include "abiy.h"

/**
 * _myloop - return x the power of y
 * @x: value to raise
 * @y: power of
 * Return: result of the power
 */

int _myloop(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (x * _myloop(x + 1, y));
}

/**
 * _sqrt_recursion - return integer
 * @n: integer
 * Return: result of the power
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (_myloop(i, n));
}
