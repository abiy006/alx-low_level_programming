#include "abiy.h"

/**
 * _pow_recursion - return the power of a number
 * @x: interger ...
 * @y: interger ...
 * Return: integer ...
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
