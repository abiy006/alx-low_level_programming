#include "abiy.h"

/**
 * main - Prints the number of arguments passed into main
 * @argi: Number of command line arguments
 * @argj: Array name
 * Return: 0
 */

int main(int argi, char *argj[])
{
	int a;

	if (argi == 1)
		printf("%d\n", argi - 1);
	else
	{
		for (a = 0; *argj; a++, argj++)
			;

		printf("%d\n", a - 1);
	}

	return (0);
}
