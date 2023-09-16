#include "main.h"
/**
 * main - Print_number - print and integer
 * @n: parameter, integer value/ input
 *
 */
void print_number(int n);
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	putchar(i % 10 + '0');
}
