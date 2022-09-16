#include "main.h"

/**
 * print_numbers - prints the numbers from 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	int p = 0;

	while (p <= 9)
	{
		_putchar(p + '0');
		p++;
	}
	_putchar('\n');
}
