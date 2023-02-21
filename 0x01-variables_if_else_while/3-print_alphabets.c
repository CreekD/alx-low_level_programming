#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description:  Prints alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase letters */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* Print uppercase letters */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
