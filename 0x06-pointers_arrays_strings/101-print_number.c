#include "main.h"

/**
 * print_number - starting ...
 * @n: int
 * Return: nothing
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		print_number(n);
	}
	else
	{
		if ((n / 10) > 0)
		{
			print_number(n / 10);
			_putchar(n % 10);
		}
		else
		{
			_putchar(n % 10);
		}
	}
}
