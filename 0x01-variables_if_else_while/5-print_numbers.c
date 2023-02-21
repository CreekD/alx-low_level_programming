#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Display single digits of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
