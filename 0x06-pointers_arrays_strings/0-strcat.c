#include "main.h"
/**
 * _strcat - Concatente the string pointed to by @src
 * @dest: pointer to the string concatenated upon
 * @src: the source of string to be appended to
 *
 * return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = scr[index];

	return (dest);
}
