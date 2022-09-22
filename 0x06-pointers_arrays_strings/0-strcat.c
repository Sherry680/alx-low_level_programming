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
	int a, len;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (a = 0; src[a] != '\0' ++a, ++len)
	{
		dest[len] = src[a];
	}
	dest[len] = '\0';
	return (dest);
}
