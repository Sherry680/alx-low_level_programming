#include "main.h"

/**
 * print_line - print line
 * @n: input value
 *
 * Description: draw straight line in the terminal
 * Return: always (0)
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
