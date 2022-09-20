#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random password generator for 101 crackme
 *
 * Return: always 0
 */
int main(void)
{
	char a[100];
	int r, n, x;

	n = 0;
	x = 0;
	srand(time(NULL));
	while (n < 2645)
	{
		r = rand() % 122;
		if (r > 32)
		{
			a[x++] = r;
			n += r;
		}
	}
	a[x++] = (2772 - n);
	a[x] = '\0';
	printf("%s", a);
	return (0);
}
