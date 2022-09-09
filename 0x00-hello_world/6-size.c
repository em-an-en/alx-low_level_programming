#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
*/

int main(void)
{
	printf("Size of a char: %ld bytes\n", sizeof(char));

	printf("Size of an int: %ld bytes\n", sizeof(int));

	printf("Size of a long int: %li bytes\n", sizeof(long int));

	printf("Size of a long long int: %1lu bytes\n", sizeof(long long int));

	printf("Size of a float: %ld bytes\n", sizeof(float));

	return (0);
}
