#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first input string
 * @src: second input string
 * @n: number of bytes to be used
 *
 * Description: use at most n bytes from src
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, a;

	a = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	while (src[a] != 0 && a < n)
	{
		dest[len] = src[a];
		++a;
		++len;
	}
	dest[len] = '\0';
	return (dest);
}
