#include "main.h"
/**
 * _strdup - duplicate a string using malloc
 * @str: string to duplicate
 * Return: pointer to a the new duped string
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		c++;
	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		a[i] = str[i];
	}

	a[c] = '\0';

	return (a);
}
