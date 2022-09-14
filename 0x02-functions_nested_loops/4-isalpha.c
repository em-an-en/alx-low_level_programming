#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: letter that is being tested
 * Description - prints alphabetic character
 * Return: Alway 0
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 94 && c < 124))
	{
		return (1);
	}
	else
		return (0);

}
