#include <stddef.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string,
 * @str: String whose length to be calculated,
 * @return: length of string.
 */

size_t _strlen(const char *string)
{
	size_t len = 0;
	
	while (*string != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
