#include <stdio.h>
#include <ctype.h>
/**
 * main - print alphabet in reverse
 *
 * Return: return o
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
