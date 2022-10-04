#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of command line args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
