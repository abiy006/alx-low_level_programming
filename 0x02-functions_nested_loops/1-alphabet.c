#include "main.h"
/**
* main - Entry point
*
* Description: 'print all the alphabets'
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
