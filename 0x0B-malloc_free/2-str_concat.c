#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: NULL in case of failure, but pointer to the new string
 * in case of success
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
