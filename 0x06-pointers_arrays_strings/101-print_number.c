#include "main.h"
#include <stdio.h>

/**
 * print_number - starting ...
 * @i: int
 * Return: nothing
 */
void print_number(int i)
{
	unsigned int n = i;

	if (i < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if ((n / 10) > 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n % 10) + '0');
	}

}
