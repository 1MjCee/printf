#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
#include "main.h"

int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n\n");
    _printf("hello, %s\n", "Jordan");
    printf("hello, %s\n\n", "Jordan");
    _printf("sign %%\n");
    printf("sign %%\n\n");
    _printf("grade: %c\n", 'A');
    printf("grade: %c\n\n", 'A');
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n\n", -762534);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n\n", len2, len2);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n\n", "I am a string !");

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n\n", len);
    _printf("Len:[%d]\n", len2);
    printf("Len:[%d]\n\n", len2);
  return (0);
}