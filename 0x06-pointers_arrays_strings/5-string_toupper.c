#include "main.h"
/**
 * string_toupper - uppercase strings
 * @a: input string
 * Description: changes all lowercase letters to uppercase
 * Return: (0)
 */
char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; ++x)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = a[x] - 32;
		}
	}
	return (a);
}

