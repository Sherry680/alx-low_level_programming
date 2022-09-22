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
	int x = 0, dest_len = 0;

	while (dest[x++])
		dest_len++;

	for (x = 0; src[x]; x++)
		dest[dest_len++] = src[x];

	return (dest);
}
