#include "main.h"

/**
 * print_number - starting ...
 * @n: int
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((unsigned int) num % 10 + '0');
}
