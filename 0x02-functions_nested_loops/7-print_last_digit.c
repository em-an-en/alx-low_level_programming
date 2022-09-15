#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @p: int type number
 * Return: value of the last digit of @p
 */

int print_last_digit(int p)
{
	int pt;

	if (p < 0)
	{
		pt = -1 * (p % 10);
		_putchar(pt + '0');
		return (pt);
	}
	else
	{
		pt = p % 10;
		_putchar(pt + '0');
		return (pt);
	}
}
