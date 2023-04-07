#include "main.h"
#include <stdio.h>
/**
 * main - prints allarguments it recieves
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x = 0;

	if (x < argc)
	{
		x++;
		printf("%s\n", argv[x]);
	}
	return (0);
}
