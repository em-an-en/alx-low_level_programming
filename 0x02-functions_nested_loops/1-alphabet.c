#include "main.h"

/**
 * print_alphabet - Entry point
 * Description -> A function that prints the alphabet, in lowercas
 * Return: Always 0
 */

void print_alphabet(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
		_putchar(p);

	_putchar('\n');

}
