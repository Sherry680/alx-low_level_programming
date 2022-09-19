#include "main.h"

/**
 * puts2 - print character
 * @str: input string
 *
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar (str[a]);
	}
	_putchar ('\n');
}
