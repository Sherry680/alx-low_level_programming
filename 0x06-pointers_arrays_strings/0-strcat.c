#include "main.h"
/**
 * _strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the string that will be appended
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, a;

	while (dest[len])
		len++;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[len] = src[a];
		len ++1;

	}
	dest[len] = '\0';

	return (dest);
}
