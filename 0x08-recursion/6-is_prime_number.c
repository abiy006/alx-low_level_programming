#include "abiy.h"

/**
 * _myloop - return x the power of y
 * @x: value to raise
 * @y: power of
 * Return: result of the prime
 */

int _myloop(int x, int y)
{
	if (y == 1)
		return (1);
	else if (x % y == 0 && y > 0)
		return (0);
	else
		return (_myloop(x, y - 1));
}

/**
 * is_prime_number - return integer
 * @n: integer
 * Return: result of the prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_myloop(n, n - 1));
}
