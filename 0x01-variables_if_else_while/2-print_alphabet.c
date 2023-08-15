#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'printing last digit'
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	/* Get the character to be written */
	char ch;

	/* Write the Character to stdout */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}

