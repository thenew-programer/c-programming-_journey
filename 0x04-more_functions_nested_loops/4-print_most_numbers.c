#include "main.h"

/**
* print_most_numbers - print form 0 - 9 except for 2 & 4
*
* Return: 0-9
*
*/

void print_most_numbers(void)
{
int i;

i = 0;
while (i < 10)
{
if (i == 2 || i == 4)
{
i++;
continue;
}
_putchar(('0' + i));
i++;
}

_putchar('\n');
}
