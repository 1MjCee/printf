#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints a character to stdout,
 * @c: The character to be printed out,
 * Return: 0 on success, -1 on failure.
 */

int _putchar(char m)
{
	return(write(1, &m, 1));
}
