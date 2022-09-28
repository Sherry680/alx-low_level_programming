include "main.h"
/**
 * print_chessboard - print the chessboard
 * @a: array of pieces
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			_putchar('\0');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
