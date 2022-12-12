#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int rev_char;

	for (rev_char = 'z' ; rev_char >= 'a' ; rev_char--)
		putchar(rev_char);

	putchar('\n');

	return (0);
}
