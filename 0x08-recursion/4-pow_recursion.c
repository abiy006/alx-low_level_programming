#include "abiy.h"

/**
 * _pow_recursion - return the power of a number
 * @x: interger ...
 * @y: interger ...
 * Return: integer ...
 **/

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
		return (-1);

	for (i = 0; i <= y; i++)
	{
		x = x * x;
	}
	return (x);
}
