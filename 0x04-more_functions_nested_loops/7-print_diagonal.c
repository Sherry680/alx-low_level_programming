#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: input value
 *
 * Description: draw adiagonal line in the terminal
 * Return: always (0)
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
