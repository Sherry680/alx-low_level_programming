#include "main.h"

/**
 * _strncat - Concatenate two strings using at most
 * an inputted number of bytes from src
 * @dest: the string to be appended upon
 * @src: string to be appended to dest
 * @n: The number of bytes from scr to be appended to dest
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, x;

	x = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	while (scr[x] != 0 && x < n)
	{
		dest[len] = scr[x];
		++x;
		++len;
	}
	dest[len] = '\0';
	return (dest);
}
