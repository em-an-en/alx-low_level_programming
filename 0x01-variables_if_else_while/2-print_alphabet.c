#include <stdio.h>

/**
 * main -Entry point
 * Description - prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a', alpha <= 'z', alpha++)

	{
		putchar(alpha);
		putchar('\n');

	}

	return (0);
}
