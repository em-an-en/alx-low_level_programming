#include <stdio.h>

/**
 * main -Entry point
 * Description - prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while(alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
