#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display hexadecimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (i = 'a'; i < 'g'; i++)
		putchar(i);

	putchat('\n');
	return (0);
}
