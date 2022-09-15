#include "main.h"
/**
 * print_square - printt square
 * @n: input size
 *
 * Description: print a square
 * Return: always (0)
 */
void print_square(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
