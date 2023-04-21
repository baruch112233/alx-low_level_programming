#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: argument variable
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes;
	int i;
	char *arr;

	i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	while (i < bytes)
	{
		if (i == (bytes - 1))
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		i++;

		printf("%02hhx ", arr[i]);
	}
	return (0);
}
