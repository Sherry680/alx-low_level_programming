#include "main.h"

/**
 * _isdigit - 1 if c is a digit
 * @c: input value
 *
 * Description: check for a digit (0 through 9)
 * Return: always (0)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
