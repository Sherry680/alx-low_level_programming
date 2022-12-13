#include "main.h"
/**
 * _strncpy - string copy
 * @dest: first input character
 * @src: second input character
 * @n: number of bytes
 *
 * Description: the function copies a string
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	for ( ; a < n && src[a] != '\0'; ++a)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		++a;
	}
	return (dest);
}
