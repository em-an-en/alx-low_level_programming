#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: no of bits to be flipped to get to m from n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int p;
	unsigned long int q = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		p = q >> i;
		if (p & 1)
			count++;
	}

	return (count);
}
