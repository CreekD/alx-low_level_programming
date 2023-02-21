#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Prints all the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
