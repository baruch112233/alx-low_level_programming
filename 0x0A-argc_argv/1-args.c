#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguments passed to it
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);
	argc--;

	return (0);
}
