#include <stddef.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string,
 * @str: String whose length to be calculated,
 * @return: length of string.
 */

size_t _strlen(const char *str)
{
	size_t len = 0;
	
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
