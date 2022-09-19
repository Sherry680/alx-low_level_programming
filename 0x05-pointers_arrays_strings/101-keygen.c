#include <stdio.h>
#include <time.h>
/**
 * main - random password generater for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	char a[100];
	int x, n, i;

	n = 0;
	i = 0;
	srand(time(NULL));
	while (n < 2645)
	{
		x = rand() % 122;
		if (x > 32)
		{
			a[i++] = x;
			n += x;
		}
	}
	a[i++] = (2772 - n);
	a[i] = '\0';
	printf("%s" , a);

	return (0);
}
