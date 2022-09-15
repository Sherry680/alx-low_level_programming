#include "main.h"

/**
 * print_most_numbers - print most numbers
 *
 * Description: prints numbers followed by new line
 * Return: always (0)
 */
void print_most_numbers(void)
{
	int j;

	j = 0;

	for (j = 0; j < 10; j++)
	{
		if (j == 2 || j == 4)
			j++;

		_putchar(j + '0');
	}
	_putchar('\n');
}
