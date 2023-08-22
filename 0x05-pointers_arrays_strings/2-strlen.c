#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string
 * return: length
 */
int _strlen(char *s)
{
int length;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
