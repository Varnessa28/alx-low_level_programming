#include <stdio.h>

/**
 * main - entry point
 *
 * description - printing numbers of base 16
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	char b;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (b = 'a'; b <= 'f'; b++
			)
		putchar(b);

	putchar('\n');

	return (0);


}
