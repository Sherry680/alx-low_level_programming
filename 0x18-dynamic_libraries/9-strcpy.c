#include "main.h"

/**
 * _strcpy - print array
 * @dest: character pointer
 * @src: character source
 * Description:copies _strcpy pointed to by src
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = src[a];
	return (dest);
}
