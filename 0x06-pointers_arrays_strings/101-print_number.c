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
	}
        else
        {
	_putchar(n + '\n');
        }

}
