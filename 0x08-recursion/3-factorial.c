#include "abiy.h"

/**
 * factorial - return factorial
 * @n: interger ...
 * Return: factorial integer ...
 **/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (factorial(n - 1));
}
