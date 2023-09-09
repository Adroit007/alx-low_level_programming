#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 52; i < 0; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
