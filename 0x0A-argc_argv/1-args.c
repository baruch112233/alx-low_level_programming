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
	if (argc > 0)
	{
		argc--;
		printf("%d\n", argc);
	}
	return (0);
}
