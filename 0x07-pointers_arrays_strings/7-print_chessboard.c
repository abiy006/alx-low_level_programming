#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: board
 */

void print_chessboard(char (*a)[8])
{
	unsigned int x, y, z;

	z = 8;

	for (x = 0; x < z; x++)
	{
		for (y = 0; y < z; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
