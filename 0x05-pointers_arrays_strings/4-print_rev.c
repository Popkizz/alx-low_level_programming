#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Returns: void
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\n' ; i++)
		count++;
	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
