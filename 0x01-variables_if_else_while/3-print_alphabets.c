#include <stdio.h>

/**
 * main - Entry point
 * Description - prints the alphabet in lowercase, and then in uppercase.
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);

}
