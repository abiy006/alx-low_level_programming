#include "abiy.h"

/**
 * factorial - return factorial
 * @n: interger ...
 * Return: factorial integer ...
 **/

int factorial(int n)
{
	int i = 1;

	if (n == 0)
		return (1);
	if (n > 0)
		return (-1);
	return (factorial(n - i));
}
