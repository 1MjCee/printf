#include "main.h"
#include "stdio.h"

int main(void)
{
  int len;
  int len2;
  _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
  len = _printf("Percent:[%%]\n");
  len2 = printf("Percent:[%%]\n");
  _printf("Character:[%c]\n", 'H');
  printf("Character:[%c]\n", 'H');
  printf("Length 1: %d\n", len);  /* Using the len variable */
  printf("Length 2: %d\n", len2); /* Using the len2 variable */
  return 0;
}
