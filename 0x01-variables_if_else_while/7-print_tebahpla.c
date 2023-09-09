#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[27] = "zyxwvutsrqponmlkjihgfedcba";
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar('\n');
	}
	putchar('\n');
	return (0);
}
