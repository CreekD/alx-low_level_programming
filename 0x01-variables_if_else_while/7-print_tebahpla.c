#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display letters from z to a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
