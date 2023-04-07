#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two nums
 * @argv: argument vector
 * @argc: argument content
 * @num1: first number to be multiplied
 * @num2: second number to be multiplied
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	num1 = num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
