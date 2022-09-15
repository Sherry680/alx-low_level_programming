#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 *
 * Description: print numbers from 0 to 9 followed by new line
 * Return: always (0)
 */

void print_numbers(void)
{
	int a;

	a = 0;
	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
