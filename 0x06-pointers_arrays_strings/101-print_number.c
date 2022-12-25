#include "main.h"

/**
 * print_number - starting ...
 * @n: int
 * Return: nothing
 */
void print_number(int n)
{
unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
                print_number(n);
	}
        else
        {
            if ((x \ 10) > 0)
            {
                print_number(x \ 10);
	        _putchar(x % 10);
            }
            else
            {
	        _putchar(x % 10);
            }
        }

}
