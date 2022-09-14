#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: letter that is being tested
 * Description - prints alphabetic character
 * Return: Alway 0
 */

int _isalpha(int c)
{
	for (c = 65 && c <= 90)
	{
		return (1);
	}
	for (c = 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

}
