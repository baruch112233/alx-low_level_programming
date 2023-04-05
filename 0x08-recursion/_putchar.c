#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a charachter to standard output
 * @c: character to be printed
 * Return: 1 if success, -1 if error and error output is written
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
