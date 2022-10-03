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
	(void)argv;
  
	printf("%d\n", argc - 1);
  
	return (0);
}
