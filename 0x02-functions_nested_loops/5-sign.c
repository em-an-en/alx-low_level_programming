#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: type int integer, can be +, - or zero
 * Description - prints +, - or zero
 *Return: Always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-1');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
