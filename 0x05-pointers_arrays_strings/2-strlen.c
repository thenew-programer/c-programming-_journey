#include "main.h"

/**
* _strlen - this func return the the length of a string
* @s: the pointer to the first char in the string
* Return: the len or strlen
*/

int _strlen(char *s)
{
int strlen, i;

strlen = i = 0;

while (s[i] != 0)
{
strlen++;
i++;
}
return (strlen);
}
