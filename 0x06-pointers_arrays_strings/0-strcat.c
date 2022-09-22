#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first input string
 * @src: second input string
 *
 * Description: append the src string to the dest string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x, len;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (x = 0; src[x] != '\0'; ++x, ++len)
	{
		dest[len] = src[x];
	}
	dest[len] = '\0';
	return (dest);
}
