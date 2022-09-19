#include "main.h"
/**
 * puts_half - print half
 * @str: input string
 * Description: print half of a string
 * Return: 0
 */
void puts_half(char *str)
{
	int a;
	int diff;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	diff = (a + 1) / 2;
	for (a = diff ; str[a]; a++)
	{
		_putchar (str[a]);
	}
	_putchar ('\n');
}
