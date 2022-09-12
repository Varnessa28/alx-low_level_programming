#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lower case letters in reverse
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char ba;

	for (ba = 'z'; ba >= 'a'; ba--)

		putchar(ba);

	putchar('\n');

	return (0);
}
