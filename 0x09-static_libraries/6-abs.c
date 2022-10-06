#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @p: int type number
 * Return: absolute value of @p
 */

int _abs(int p)
{
	if (p < 0)
	{
		return (p * -1);
	}
	else
	{
		return (p);
	}
}
