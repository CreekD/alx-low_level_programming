#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Hexadecimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		 putchar(i + '0');
	}

	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);

}
