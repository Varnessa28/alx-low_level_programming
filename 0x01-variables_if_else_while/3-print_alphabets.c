#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char n;
	char s;

	for (n = 'a'; n <= 'z' ; n++)
		putchar(n);

	for (s = 'A' ; s <= 'Z' ; s++)
		putchar(s);

	putchar('\n');

	return (0);
}

