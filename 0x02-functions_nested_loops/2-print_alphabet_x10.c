#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - prints 10 times the alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int p;
	int s;

	for (s = 0; s < 10; s++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}

}
