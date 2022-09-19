#include "main.h"
/**
 * print_rev - print reverse
 * @s: input string
 *
 * Description: print a string, in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int left, len, x;

	len = 0;
	left = 0;
	for (x = 0; s[x] != '\0'; ++x)
	{
		len = x;
	}
	for (; len >= left; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n);
}
