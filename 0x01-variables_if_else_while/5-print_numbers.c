#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char n;

	for (n = '0' ; n <= '9' ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
