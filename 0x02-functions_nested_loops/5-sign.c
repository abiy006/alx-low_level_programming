#include "main.h"

/**
 * print_sign - checks the number sign and
 *
 * @n: is the character
 *
 * Return: 1 if n is grater than 0
 * 0 if n is equal to 0
 * -1 if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
