#include "main.h"

/**
* print_rev - rights a string in reverse
* @s: the pointer to the string
* Return: the string printed in reverse
*/

void print_rev(char *s)
{
int i, size;

i = size = 0;
while (s[i] != 0)
{
size++;
i++;
}

for (i = size - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar(10);
}
